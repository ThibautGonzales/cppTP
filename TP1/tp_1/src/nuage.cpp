#include "nuage.hpp"

void Nuage::ajouter(Point& p){
    points.push_back(&p);
}

int Nuage::size(){
    return points.size();
}

Nuage::const_iterator Nuage::begin(){
    return points.begin();
}

Nuage::const_iterator Nuage::end(){
    return points.end();
}