#include <histogramme.hpp>
/*


template <typename Compare>
Histogramme<Compare>::Histogramme(double inf, double sup, unsigned nbClasses):inf(inf), sup(sup), nbClasses(nbClasses){
    double lenght = (sup-inf)/nbClasses;
    for(unsigned i=0; i<nbClasses; i++){
        this->v.insert(Classe(inf+i*lenght, inf+(i+1)*lenght));
    }
}

template <typename Compare>
std::set<Classe, Compare> Histogramme<Compare>::getClasses() const{
    return this->v;
}

template <typename Compare>
void Histogramme<Compare>::ajouter(Valeur v){
    if(v.getNombre() < this->inf || v.getNombre() > this->sup){
        throw std::domain_error("Valeur en dehors des bornes");
    }
    auto it = std::find_if(this->v.begin(), this->v.end(), [&](const Classe & c){return (c.getBorneInf() <= v.getNombre() && v.getNombre() < c.getBorneSup());});
    if(it != this->v.end()){
        double inf = it->getBorneInf();
        double sup = it->getBorneSup();
        int q = it->getQuantite()+1;

        this->v.erase(*it);

        this->v.insert(Classe(inf, sup, q));
    }
}


template <typename Compare>
void Histogramme<Compare>::ajouter(Echantillon e){
    for (int i = 0; i<e.getTaille(); i++){
        this->ajouter(e.getValeur(i));
    }
}

*/