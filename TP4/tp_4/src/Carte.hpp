#ifndef CARTE_HPP
#define CARTE_HPP

#include <iostream>

class UsineCarte;

class Carte{
    friend class UsineCarte;

    //Attributs
    private:
        unsigned value;
        static int compteur;
    public:

    //Methodes
    private:
        Carte(unsigned value);
        Carte(const Carte&) = delete;
        Carte& operator=(const Carte&) = delete;

    public:
        unsigned getValeur();
        static int getCompteur(){return compteur;}
        ~Carte();
};

#endif