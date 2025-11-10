#include <iostream>

struct ComparateurQuantite {
    bool operator()(const Classe& a, const Classe& b) const{
        if(a.getQuantite() == b.getQuantite()){
            return a.getBorneInf() < b.getBorneInf();
        }
        return a.getQuantite() > b.getQuantite();
    }
};