#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <iostream>
#include "point.hpp"

class Polaire;

class Cartesien : public Point{
    private:
        double x;
        double y;
    public:
        Cartesien();
        Cartesien(double x, double y);
        void afficher(std::ostream& flux) const override;
        void setX(double x);
        void setY(double y);
        double getX() const;
        double getY() const;
        void convertir(Polaire& p) const override;
};

#endif