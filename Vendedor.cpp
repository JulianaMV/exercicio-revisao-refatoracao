#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

#define QTD_MESES 12


Vendedor::Vendedor(std::string _nome, double _salario, double _quota){
	this->nome = _nome; this->salarioHora = _salario; this->quotaMensalVendas = _quota;
}

double Vendedor::quotaTotalAnual() const{
	return quotaMensalVendas * QTD_MESES;
}
	


