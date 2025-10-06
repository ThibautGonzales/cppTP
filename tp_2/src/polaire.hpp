#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include <iostream>
#include "point.hpp"
#include "cartesien.hpp"

class Cartesien;

class Polaire : public Point{
    private:
        double a;
        double d;
    public:
        Polaire();
        Polaire(double a, double d);
        Polaire(const Cartesien& p);
        void setAngle(double a);
        void setDistance(double d);
        double getAngle() const;
        double getDistance() const;
        void afficher(std::ostream& flux) const override;
        void convertir(Cartesien& p) const override;
        void convertir(Polaire& p) const override;
};

#endif