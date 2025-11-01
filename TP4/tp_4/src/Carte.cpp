#include <Carte.hpp>

int Carte::compteur = 0;

Carte::Carte(unsigned value){
    this->value = value;
    compteur += 1;
}

unsigned Carte::getValeur(){
    return this->value;
}

Carte::~Carte(){
    compteur -= 1;
}