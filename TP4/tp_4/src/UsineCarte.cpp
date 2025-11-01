#include <UsineCarte.hpp>

UsineCarte::UsineCarte(){
    this->maxCarte = 52;
}
UsineCarte::UsineCarte(const unsigned max){
    this->maxCarte = max;
}

unsigned UsineCarte::getRandomNumber(int min, int max){
    // Crée un générateur de nombres aléatoires basé sur le matériel (si possible)
    std::random_device rd;

    // Initialise un moteur pseudo-aléatoire
    std::mt19937 gen(rd());

    // Définit une distribution uniforme entre 0 et 51 inclus
    std::uniform_int_distribution<> distrib(min, max);

    // Tire un nombre aléatoire
    unsigned number = distrib(gen);

    return number;
}

std::unique_ptr<Carte> UsineCarte::getCarte(){
    if(this->assignedValues.size() < this->maxCarte){
        //int number = this.getRandomNumber(0, 51);
        unsigned number = 0;
        while(this->assignedValues.find(number) != this->assignedValues.end()){
            number = (number+1)%this->maxCarte;
        }

        this->assignedValues.insert(number);
        return std::unique_ptr<Carte>(new Carte(number));
    }
    else{
        return NULL;
    }
}