#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point{
    public:
        virtual void afficher(std::ostream& flux) const;
        virtual void convertir(Point& p) const;
        friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif