
#include "polaire.hpp"

Polaire::Polaire(){
    this->setAngle(0);
    this->setDistance(0);
}

Polaire::Polaire(double a, double d){
    this->setAngle(a);
    this->setDistance(d);
}

Polaire::Polaire(const Cartesien& p){
    this->setAngle(std::atan2(p.getY(), p.getX()) * 180 / M_PI);
    this->setDistance(std::hypot(p.getX(), p.getY()));
}

void Polaire::setAngle(double a){
    this->a = a;
}
void Polaire::setDistance(double d){
    this->d = d;
}

double Polaire::getAngle() const{
    return this->a;
}

double Polaire::getDistance() const{
    return this->d;
}

void Polaire::afficher(std::ostream& flux) const{
    flux << "(a=" << this->getAngle() << ";d=" << this->getDistance() << ")";
}

void Polaire::convertir(Cartesien& p) const{
    p.setX(this->getDistance() * std::cos(this->getAngle() * M_PI / 180));
    p.setY(this->getDistance() * std::sin(this->getAngle() * M_PI / 180));
}

void Polaire::convertir(Polaire& p) const{
    p.setAngle(this->getAngle());
    p.setDistance(this->getDistance());
}
