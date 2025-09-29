#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include <iostream>
#include "point.hpp"

class Nuage{
    public:
    using Points = std::vector<Point*>;    
    using const_iterator = Points::const_iterator;
        
    private:
        Points points;
    public:
        void ajouter(Point& p);
        int size();
        const_iterator begin();
        const_iterator end();
};

#endif