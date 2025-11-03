#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <valeur.hpp>

class Echantillon{
    //Attributs
    public:

    private:
        std::vector<Valeur> v;

    //Methodes
    public:
        int getTaille();
        void ajouter(double v);
        Valeur getMinimum();
        Valeur getMaximum();
        Valeur getValeur(int i);
    private:

};


#endif