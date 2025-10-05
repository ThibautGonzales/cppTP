#include "point.hpp"

std::ostream& operator<<(std::ostream& os, const Point& p) {
    p.afficher(os);
    return os;
}

void Point::afficher(std::ostream& flux) const{}

void Point::convertir(Cartesien& p) const{}

void Point::convertir(Polaire& p) const{}

void Point::setX(double x){
    this->x = x;
}
void Point::setY(double y){
    this->y = y;
}

double Point::getX() const{
    return this->x;
}

double Point::getY() const{
    return this->y;
}