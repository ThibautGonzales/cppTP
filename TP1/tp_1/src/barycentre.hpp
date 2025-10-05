#ifndef BARYCENTRE_HPP
#define BARYCENTRE_HPP

#include <vector>
#include <iostream>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"
#include "nuage.hpp"

Cartesien barycentre(Nuage &n);

struct BarycentreCartesien {
    Cartesien operator()(Nuage &n);
};

struct BarycentrePolaire {
    Polaire operator()(Nuage &n);
};


#endif