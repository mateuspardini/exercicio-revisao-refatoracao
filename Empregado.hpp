#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>
#include <stdio.h>

class Empregado {

    public:
        std::string nome;
        double salarioHora;
        double horasTrabalhadas;
        //Construtor
        Empregado(std::string _nome , double _salarioHora, double horasTrabalhadas);
        //Salário do mês
        double pagamentoMes(double horasTrabalhadas);
        // Printar os dados
        void printDados();

};
#endif
