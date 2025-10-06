#ifndef BARYCENTRE_HPP
#define BARYCENTRE_HPP

#include <vector>
#include <iostream>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"
#include "nuage.hpp"

template <typename T>
T barycentre_v1(Nuage<T> &n) {
    if (n.size() == 0){
        return T(0, 0);
    }
    else{
        typename Nuage<T>::const_iterator it;
        double x = 0;
        double y = 0;
        for (it = n.begin(); it != n.end(); ++it){
            Cartesien c;
            it->convertir(c);
            x += c.getX();
            y += c.getY();
        }

        x = x/n.size();
        y = y/n.size();
        Cartesien centre(x, y);

        return T(centre);
    }
}

template <>
inline Polaire barycentre_v1<Polaire>(Nuage<Polaire> &n) {
    if (n.size() == 0){
        return Polaire(0, 0);
    }
    else{
        Nuage<Polaire>::const_iterator it;
        double x = 0;
        double y = 0;
        for (it = n.begin(); it != n.end(); ++it){
            x += it->getAngle();
            y += it->getDistance();
        }

        x = x/n.size();
        y = y/n.size();

        return Polaire(x, y);
    }
}

/*
struct BarycentreCartesien {
    Cartesien operator()(Nuage &n);
};

struct BarycentrePolaire {
    Polaire operator()(Nuage &n);
};
*/


#endif