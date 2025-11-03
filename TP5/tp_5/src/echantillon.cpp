#include <echantillon.hpp>

int Echantillon::getTaille(){
    return this->v.size();
}

void Echantillon::ajouter(double v){
    this->v.push_back(Valeur(v));
}

Valeur Echantillon::getMinimum(){
    if(this->getTaille() == 0){
        throw std::domain_error("Vecteur vide");
    }
    return *std::min_element(this->v.begin(), this->v.end(), [](Valeur a, Valeur b){return a.getNombre() < b.getNombre();});
}

Valeur Echantillon::getMaximum(){
    if(this->getTaille() == 0){
        throw std::domain_error("Vecteur vide");
    }
    return *std::min_element(this->v.begin(), this->v.end(), [](Valeur a, Valeur b){return a.getNombre() > b.getNombre();});
}

Valeur Echantillon::getValeur(int i){
    if(this->getTaille() <= i){
        throw std::out_of_range("Out of range");
    }
    return this->v[i];
}