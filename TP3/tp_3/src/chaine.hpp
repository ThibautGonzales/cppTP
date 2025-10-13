#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <iostream>
#include <exceptionChaine.hpp>
#include <sstream>

template <typename T>
std::string chaine(const T x);
std::string chaine(const std::string x);
std::string chaine(const int x);
std::string chaine(const double x);
template<typename... Args>
std::string chaine(const Args... args);
template <typename T, size_t... Is>
std::string chaine_bis(const T & t, std::index_sequence<Is...>);
template <typename... Args>
std::string chaine(const std::tuple<Args...> & t);

template <typename T>
std::string chaine(const T x){
    throw ExceptionChaine(typeid(x).name());
}

std::string chaine(const std::string x){
    return x;
}

std::string chaine(const int x){
    std::stringstream ss;
    ss << x;

    return ss.str();
}

std::string chaine(const double x){
    return std::to_string(x);
}

template<typename... Args>
std::string chaine(const Args... args){
    std::ostringstream oss;
    ((oss << chaine(args) << " "), ...);
    return oss.str();
}

template <typename T, size_t... Is>
std::string chaine_bis(const T & t, std::index_sequence<Is...>){
    std::ostringstream oss;
    ((oss << chaine(std::get<Is>(t)) << " "), ...);
    return oss.str();
}

template <typename... Args>
std::string chaine(const std::tuple<Args...> & t){
    return chaine_bis(t,std::make_index_sequence<sizeof...(Args)>());
}




#endif