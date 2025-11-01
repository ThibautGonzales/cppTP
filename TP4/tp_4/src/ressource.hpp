#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

#include <iostream>
#include <vector>
#include <memory>



class Ressource{
    //Attributs
    public:

    private:
        int stock;

    //Methodes
    public:
        Ressource(int s){this->stock = s;}
        void consommer(int cons);
        int getStock();

    private:
};


using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream& operator<<(std::ostream& os, const ressources_t& resVecteur);

#endif