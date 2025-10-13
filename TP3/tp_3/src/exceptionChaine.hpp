#ifndef EXCEPTION_CHAINE_HPP
#define EXCEPTION_CHAINE_HPP

#include <iostream>
#include <demangle.hpp>
#include <string>

class ExceptionChaine : public std::exception{
    private:
        std::string message;
    public:
    ExceptionChaine(const std::string & name){
        this->message = "Conversion en chaine impossible pour '"+demangle(name)+"'" ;
    }
    const char * what() const noexcept override{
        return message.c_str();
    }
};

#endif