#include <classe.hpp>

Classe::Classe(double inf, double sup):inf(inf), sup(sup), quantite(0){}

Classe::Classe(double inf, double sup, unsigned q):inf(inf), sup(sup), quantite(q){}

double Classe::getBorneInf() const{
    return this->inf;
}

double Classe::getBorneSup() const{
    return this->sup;
}

unsigned Classe::getQuantite() const{
    return this->quantite;
}

void Classe::setBorneInf(double inf){
    this->inf = inf;
}

void Classe::setBorneSup(double sup){
    this->sup = sup;
}

void Classe::setQuantite(unsigned q){
    this->quantite = q;
}

void Classe::ajouter(){
    this->quantite += 1;
}

bool Classe::operator<(const Classe& b) const{
    return this->getBorneInf() < b.getBorneInf();
}

bool Classe::operator>(const Classe& b) const{
    return this->getBorneInf() > b.getBorneInf();
}