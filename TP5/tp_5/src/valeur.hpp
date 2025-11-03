#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <iostream>


class Valeur{
    //Attributs
    public:

    private:
        double value;
    //Methodes
    public:
        Valeur();
        Valeur(double v);
        double getNombre() const;
        void setNombre(double v);
    private:

};


#endif