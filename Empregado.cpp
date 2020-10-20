#include "Empregado.hpp"

//Construtor
Empregado::Empregado(std::string _nome , double _salarioHora, double horasTrabalhadas){
    nome = _nome;
    salarioHora = _salarioHora;
    _horasTrabalhadas = horasTrabalhadas;
}
//
double Empregado::pagamentoMes(double horasTrabalhadas){
    double _horasTrabalhadas = horasTrabalhadas;
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double horasExtra = horasTrabalhadas - 8;
        _horasTrabalhadas += horasExtra / 2;
    }
    return _horasTrabalhadas * salarioHora;
}



