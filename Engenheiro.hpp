#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include <string>
#include "Empregado.hpp"


class Engenheiro : public Empregado{
    int projetos; 
    Engenheiro( std::string _nome, int _projetos, double _salario);
};

#endif