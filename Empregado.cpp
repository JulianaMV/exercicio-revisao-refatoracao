#include <string>
#include "Empregado.hpp"

#define HORAS_DIÁRIAS 8

double Empregado::pagamentoMes(double horasTrabalhadas) const{
      double totalHoras = horasTrabalhadas;
      double pagamento;
	
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORAS_DIÁRIAS) {

        double totalHoras = horasTrabalhadas - HORAS_DIÁRIAS;
        totalHoras += horaExtra / 2;
      }
	  pagamento =totalHoras * salarioHora;
    return pagamento;
}   
