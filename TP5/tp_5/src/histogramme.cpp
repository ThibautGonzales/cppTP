#include <histogramme.hpp>

Histogramme::Histogramme(double inf, double sup, unsigned nbClasses):inf(inf), sup(sup), nbClasses(nbClasses){
    double lenght = (sup-inf)/nbClasses;
    for(unsigned i=0; i<nbClasses; i++){
        this->v.push_back(Classe(inf+i*lenght, inf+(i+1)*lenght));
    }
}

std::vector<Classe> Histogramme::getClasses(){
    return this->v;
}


void Histogramme::ajouter(Valeur v){
    if(v.getNombre() < this->inf || v.getNombre() > this->sup){
        throw std::domain_error("Valeur en dehors des bornes");
    }
    double lenght = (this->sup-this->inf)/this->nbClasses;
    int indice = (int)((v.getNombre() - inf)/lenght);
    this->v[indice].ajouter();
}

/*
void Histogramme::ajouter(Valeur v){
    if(v.getNombre() < this->inf || v.getNombre() > this->sup){
        throw std::domain_error("Valeur en dehors des bornes");
    }
    std::find_if(this->v.begin(), this->v.end(), [](...){return ()})
}
*/

void Histogramme::ajouter(Echantillon e){
    for (int i = 0; i<e.getTaille(); i++){
        this->ajouter(e.getValeur(i));
    }
}