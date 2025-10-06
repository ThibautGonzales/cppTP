#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include <iostream>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

template <typename T>
class Nuage{
    public:
    using Points = std::vector<T>;    
    using const_iterator = typename Points::const_iterator;
        
    private:
        Points points;
    public:
        void ajouter(T p){points.push_back(p);}
        int size() const{return points.size();}
        const_iterator begin(){return points.begin();}
        const_iterator end(){return points.end();}
};

#endif