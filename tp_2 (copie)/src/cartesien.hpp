#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <iostream>
#include "point.hpp"
#include "polaire.hpp"

class Polaire;

class Cartesien : public Point{
    public:
        Cartesien();
        Cartesien(double x, double y);
        Cartesien(const Polaire& p);
        Cartesien(const Cartesien& p);
        void afficher(std::ostream& flux) const override;
        void convertir(Cartesien& p) const override;
        void convertir(Polaire& p) const override;
};

#endif