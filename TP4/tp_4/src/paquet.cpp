#include <paquet.hpp>

void remplir(paquet_t& p, UsineCarte& u){
    bool stop = false;
    while(!stop){
        std::unique_ptr<Carte> c = u.getCarte();
        if(c == NULL){
            stop = true;
        }
        else{
            p.push_back(std::move(c));
        }
    }
}

std::ostream& operator<<(std::ostream& os, const paquet_t& paquet) {
    for (const auto& carte_ptr : paquet) {
        os << carte_ptr->getValeur() << " ";
    }
    return os;
}