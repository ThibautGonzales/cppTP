#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include <iostream>
#include <vector>
#include <set>
#include <functional>
#include <map>
#include <classe.hpp>
#include <echantillon.hpp>

template <typename Compare = std::less<Classe>>
class Histogramme{
    //Attributs
    public:

    private:
        double inf;
        double sup;
        unsigned nbClasses;
        std::set<Classe, Compare> v;
        std::multimap<Classe, Valeur> values;

    //Methodes
    public:
        Histogramme(double inf, double sup, unsigned nbClasses):inf(inf), sup(sup), nbClasses(nbClasses){
            double lenght = (sup-inf)/nbClasses;
            for(unsigned i=0; i<nbClasses; i++){
                this->v.insert(Classe(inf+i*lenght, inf+(i+1)*lenght));
            }
        }

        template <typename OtherCompare>
        Histogramme(const Histogramme<OtherCompare>& other): inf(other.getBorneInf()), sup(other.getBorneSup()), nbClasses(other.getNbClasses())
        {
            for (const auto& c : other.getClasses()) {
                this->v.insert(c);
            }
        }

        std::set<Classe, Compare> getClasses() const{
            return this->v;
        }

        void ajouter(Valeur v){
            if(v.getNombre() < this->inf || v.getNombre() > this->sup){
                throw std::domain_error("Valeur en dehors des bornes");
            }
            auto it = std::find_if(this->v.begin(), this->v.end(), [&](const Classe & c){return (c.getBorneInf() <= v.getNombre() && v.getNombre() < c.getBorneSup());});
            if(it != this->v.end()){
                Classe temp = *it;
                this->v.erase(*it);
                temp.ajouter();
                this->v.insert(temp);
                this->values.insert(std::pair(temp, Valeur(v.getNombre())));
            }
        }

        double getBorneInf() const{
            return this->inf;
        }

        double getBorneSup() const{
            return this->sup;
        }

        double getNbClasses() const{
            return this->nbClasses;
        }

        void ajouter(Echantillon e){
            for (int i = 0; i<e.getTaille(); i++){
                this->ajouter(e.getValeur(i));
            }
        }

        std::multimap<Classe, Valeur> getValeurs() const{
            return this->values;
        }


    private:

};

#endif