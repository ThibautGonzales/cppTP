#ifndef USINE_CARTE_HPP
#define USINE_CARTE_HPP

#include <iostream>
#include <set>
#include <random>
#include "Carte.hpp"
#include <memory>

class UsineCarte{
    //Attributs
    private:
        unsigned maxCarte;
        std::set<unsigned> assignedValues;
    public:

    //Methodes
    private:
        unsigned getRandomNumber(int min, int max);
        UsineCarte(const UsineCarte&) = delete;
        UsineCarte& operator=(const UsineCarte&) = delete;

    public:
        UsineCarte();
        UsineCarte(const unsigned max);
        std::unique_ptr<Carte> getCarte();
};

#endif