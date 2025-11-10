#ifndef CLASSE_HPP
#define CLASSE_HPP

#include <iostream>

class Classe{
    //Attributs
    public:

    private:
        double inf;
        double sup;
        unsigned quantite;
    //Methodes
    public:
        Classe(double inf, double sup);
        Classe(double inf, double sup, unsigned q);
        double getBorneInf() const;
        double getBorneSup() const;
        unsigned getQuantite() const;
        void setBorneInf(double inf);
        void setBorneSup(double sup);
        void setQuantite(unsigned q);
        void ajouter();
        bool operator<(const Classe& b) const;
        bool operator>(const Classe& b) const;

    private:

};

#endif