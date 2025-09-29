#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

class Cartesien;
class Polaire;

class Point{
    public:
        virtual void afficher(std::ostream& flux) const;
        friend std::ostream& operator<<(std::ostream& os, const Point& p);
        virtual void convertir(Cartesien& p) const = 0;
        virtual void convertir(Polaire& p) const = 0;
};

#endif