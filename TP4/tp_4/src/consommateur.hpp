#ifndef CONSOMMATEUR_HPP
#define CONSOMMATEUR_HPP

#include <ressource.hpp>
#include <memory>

class Consommateur{
    //Attributs
    public:
        std::shared_ptr<Ressource> r;
        int needR;

    private:


    //Methodes
    public:
        Consommateur(int n, std::shared_ptr<Ressource> r): r(r), needR(n){}
        void puiser(){
            if(r){
                r->consommer(needR);
                if(r->getStock()<=0){
                    this->r = NULL;
                }
            }
        }

    private:

};


#endif