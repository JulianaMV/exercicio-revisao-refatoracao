#include "Engenheiro.hpp"
#include <string>

Engenheiro::Engenheiro(std::string _nome, int _projetos, double _salario ){
  this->nome = _nome; 
  this->projetos = _projetos;  
  this->salarioHora = _salario;
}