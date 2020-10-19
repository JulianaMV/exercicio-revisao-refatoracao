#ifndef EMPREGADO_H
#define EMPREGADO_H

#define HORAS_DIÁRIAS 8

#include <iostream>
#include <string>


class Empregado {
  std::string nome;
  public:
    double salarioHora;  
    double quotaMensalVendas;  
    double pagamentoMes(double horasTrabalhadas);
};

#endif


