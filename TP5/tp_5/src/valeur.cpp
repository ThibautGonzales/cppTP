#include <valeur.hpp>

Valeur::Valeur(){
    this->value = 0;
    this->nom = "inconnu";
}

Valeur::Valeur(double v){
    this->value = v;
    this->nom = "inconnu";
}

Valeur::Valeur(double v, const char* n):value(v), nom(n){
}

double Valeur::getNombre() const{
    return this->value;
}

void Valeur::setNombre(double v){
    this->value = v;
}

double Valeur::getNote() const{
    return this->value;
}

std::string Valeur::getEtudiant() const{
    return this->nom;
}

void Valeur::setNote(double n){
    this->value = n;
}

void Valeur::setEtudiant(const char* n){
    this->nom = n;
}