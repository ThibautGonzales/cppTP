#include "cartesien.hpp"

Cartesien::Cartesien(){
    this->setX(0);
    this->setY(0);
}

Cartesien::Cartesien(double x, double y){
    this->setX(x);
    this->setY(y);
}

Cartesien::Cartesien(const Polaire& p){
    this->setX(p.getDistance() * std::cos(p.getAngle() * M_PI / 180));
    this->setY(p.getDistance() * std::sin(p.getAngle() * M_PI / 180));
}


void Cartesien::afficher(std::ostream& flux) const{
    flux << "(x=" << this->getX() << ";y=" << this->getY() << ")";
}

void Cartesien::setX(double x){
    this->x = x;
}
void Cartesien::setY(double y){
    this->y = y;
}

double Cartesien::getX() const{
    return this->x;
}

double Cartesien::getY() const{
    return this->y;
}

void Cartesien::convertir(Polaire& p) const{
    p.setAngle(std::atan2(this->getY(), this->getX()) * 180 / M_PI);
    p.setDistance(std::hypot(this->getX(), this->getY()));
}

void Cartesien::convertir(Cartesien& p) const{
    p.setX(this->getX());
    p.setY(this->getY());
}
