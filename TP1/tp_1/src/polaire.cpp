#include "polaire.hpp"

Polaire::Polaire(){
    this->setAngle(0);
    this->setDistance(0);
}

Polaire::Polaire(double a, double d){
    this->setAngle(a);
    this->setDistance(d);
}

void Polaire::setAngle(double a){
    this->a = a;
}
void Polaire::setDistance(double d){
    this->d = d;
}

void Polaire::afficher(std::ostream& flux) const{
    flux << "(a=" << this->getAngle() << ";d=" << this->getDistance() << ")";
}

double Polaire::getAngle() const{
    return this->a;
}

double Polaire::getDistance() const{
    return this->d;
}

void Polaire::convertir(Cartesien& p) const{
    p.setX(this->getDistance() * std::cos(this->getAngle() * M_PI / 180));
    p.setY(this->getDistance() * std::sin(this->getAngle() * M_PI / 180));
}