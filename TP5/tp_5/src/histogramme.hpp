#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include <iostream>
#include <vector>
#include <classe.hpp>
#include <echantillon.hpp>

class Histogramme{
    //Attributs
    public:

    private:
        double inf;
        double sup;
        unsigned nbClasses;
        std::vector<Classe> v;

    //Methodes
    public:
        Histogramme(double inf, double sup, unsigned nbClasses);
        std::vector<Classe> getClasses();
        void ajouter(Valeur v);
        void ajouter(Echantillon e);

    private:

};

#endif