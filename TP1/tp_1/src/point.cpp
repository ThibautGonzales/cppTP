#include "point.hpp"

std::ostream& operator<<(std::ostream& os, const Point& p) {
    p.afficher(os);
    return os;
}

void Point::afficher(std::ostream& flux) const{}

void Point::convertir(Cartesien& p) const{}

void Point::convertir(Polaire& p) const{}