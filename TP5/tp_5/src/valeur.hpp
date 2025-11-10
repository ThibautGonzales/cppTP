#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <iostream>
#include <string.h>


class Valeur{
    //Attributs
    public:

    private:
        double value;
        std::string nom;
    //Methodes
    public:
        Valeur();
        Valeur(double v);
        Valeur(double v, const char* n);
        double getNombre() const;
        void setNombre(double v);
        double getNote() const;
        std::string getEtudiant() const;
        void setNote(double n);
        void setEtudiant(const char* n);
    private:

};


#endif