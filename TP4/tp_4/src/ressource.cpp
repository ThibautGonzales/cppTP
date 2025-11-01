#include <ressource.hpp>



void Ressource::consommer(int cons){
    if(cons > this->stock){
        this->stock = 0;
    }
    else{
        this->stock -= cons;
    }
}
int Ressource::getStock(){
    return this->stock;
}




std::ostream& operator<<(std::ostream& os, const ressources_t& resVecteur) {
    for (const auto& wr : resVecteur) {
        if (auto res = wr.lock()) { 
            os << res->getStock();   
        } else {
            os << "-";               
        }
        os << " ";                   
    }
    return os;
}

