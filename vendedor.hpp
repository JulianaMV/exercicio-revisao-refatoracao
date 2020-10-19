#ifndef VENDEDOR_H
#define VENDEDOR_H

#define QTD_MESES 12

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado{
    public:
        double quotaMensalVendas;
        double quotaTotalAnual()const;
        Vendedor(std::string _nome, double _salario, double _quota);
};


#endif

