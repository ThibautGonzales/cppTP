#ifndef PAQUET_HPP
#define PAQUET_HPP

#include <UsineCarte.hpp>
#include <vector>

using paquet_t = std::vector<std::unique_ptr<Carte>>;

void remplir(paquet_t& p, UsineCarte& u);
std::ostream& operator<<(std::ostream& os, const paquet_t& paquet);

#endif