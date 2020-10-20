#include "Empregado.hpp"


class Engenheiro : public Empregado {

    private:
        int projetos;
    public:
        Engenheiro(std::string _nome,double _salarioHora,double _horasTrabalhadas,int _projetos):Empregado(_nome,_salarioHora,_horasTrabalhadas),projetos(projetos){
            nome = _nome;
            salarioHora = _salarioHora;
            horasTrabalhadas = _horasTrabalhadas;
            projetos = _projetos;
        }



};

