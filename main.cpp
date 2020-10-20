#include "Engenheiro.cpp"
#include "Vendedor.cpp"

#define tamanhoEng 3
#define tamanhoVend 3
int main() {

    //Criando vetor para armazenar engenheiros//
    Engenheiro engenheiros[tamanhoEng];
    //Inserindo dados dos engenheiros//
   for(int i=0;i<tamanhoEng;i++){
        gets(engenheiros[i].nome);
        std::cin >> engenheiros[i].salarioHora;
        std::cin >> engenheiros[i].horasTrabalhadas;
        std::cin >> engenheiros[i].projetos;
    }
    // Criando vetor para armazenar vendedores//
    Vendedor vendedores[tamanhoVend];
    // Inserindo dados dos vendedores//
    for(int i=0;i<tamanhoVend;i++){
        gets(vendedores[i].nome);
        std::cin >> vendedores[i].salarioHora;
        std::cin >> vendedores[i].horasTrabalhadas;
        std::cin >> vendedores[i].quotaMensal;
    }
    std::cout <<"\n" << std::endl;
    //Printando dados dos engenheiros//
    std::cout << "Engenheiros:" << "\n" << std::endl;
    for(int i=0;i<tamanhoEng;i++){
        std::cout << ".........Nome:" <<engenheiros[i].nome << std::endl;
        std::cout << "Pagamento mes:" << engenheiros[i].pagamentoMes(engenheiros[i].horasTrabalhadas) << std::endl;
        std::cout << ".....Projetos:" << engenheiros[i].projetos << "\n" << std::endl;
    }
    // Printando dados dos vendedores//
    std::cout << "Vendedores:" << "\n" << std::endl;
    for(int i=0;i<tamanhoVend;i++){
        std::cout << ".........Nome:" << vendedores[i].nome << std::endl;
        std::cout << "Pagamento mes:" << vendedores[i].pagamentoMes(vendedores[i].horasTrabalhadas) <<std::endl;
        std::cout << "..Quota Anual:" << vendedores[i].quotaAnual() << "\n" << std::endl;
    }
  return 0;
}
