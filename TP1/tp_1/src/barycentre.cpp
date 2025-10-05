#include "barycentre.hpp"

Cartesien barycentre(Nuage &n) {
    if (n.size() == 0){
        return Cartesien(0, 0);
    }
    else{
        Nuage::const_iterator it;
        double x = 0;
        double y = 0;
        for (it = n.begin(); it != n.end(); ++it){
            x += (*it)->getX();
            y += (*it)->getY();
        }

        x = x/n.size();
        y = y/n.size();

        return Cartesien(x, y);
    }
}


Cartesien BarycentreCartesien::operator()(Nuage &n){
    return barycentre(n);
}

Polaire BarycentrePolaire::operator()(Nuage &n){
    return Polaire(barycentre(n));
}