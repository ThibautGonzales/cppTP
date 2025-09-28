#include "cartesien.hpp"

Cartesien::Cartesien(){
    this->setX(0);
    this->setY(0);
}

Cartesien::Cartesien(double x, double y){
    this->setX(x);
    this->setY(y);
}

void Cartesien::setX(double x){
    this->x = x;
}
void Cartesien::setY(double y){
    this->y = y;
}

void Cartesien::afficher(std::ostream& flux) const{
    flux << "(x=" << this->getX() << ";y=" << this->getY() << ")";
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