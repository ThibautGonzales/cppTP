#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include <iostream>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

class Nuage{
    public:
    using Points = std::vector<Point*>;    
    using const_iterator = Points::const_iterator;
        
    private:
        Points points;
    public:
        void ajouter(Point& p);
        int size() const;
        const_iterator begin();
        const_iterator end();
};

#endif