#include "Empregado.hpp"

class Vendedor : public Empregado {

    public:
         double quotaMensal;
         Vendedor(std::string _nome, double _salarioHora,double _horasTrabalhadas, double _quotaMensal):Empregado(_nome,_salarioHora,_horasTrabalhadas),quotaMensal(_quotaMensal){
             nome = _nome;
             salarioHora = _salarioHora;
             horasTrabalhadas = _horasTrabalhadas;
             quotaMensal  = _quotaMensal;
         }

	double quotaAnual() {
	  return quotaMensal * 12;
	}




};
