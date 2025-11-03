#include <valeur.hpp>

Valeur::Valeur(){
    this->value = 0;
}

Valeur::Valeur(double v){
    this->value = v;
}

double Valeur::getNombre() const{
    return this->value;
}

void Valeur::setNombre(double v){
    this->value = v;
}