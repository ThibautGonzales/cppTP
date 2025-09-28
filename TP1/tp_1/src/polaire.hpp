#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include <iostream>
#include "point.hpp"

class Cartesien;

class Polaire : public Point{
    private:
        double a;
        double d;
    public:
        Polaire();
        Polaire(double a, double d);
        void afficher(std::ostream& flux) const override;
        void setAngle(double a);
        void setDistance(double d);
        double getAngle() const;
        double getDistance() const;
        void convertir(Cartesien& p) const override;
};

#endif