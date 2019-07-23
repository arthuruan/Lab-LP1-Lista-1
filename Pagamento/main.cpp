#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamento.h"

using namespace std;

int main(void){

    Pagamento* p1 = new Pagamento();
    Pagamento* p2 = new Pagamento();

    p1->setValorPagamento(5000);
    p1->setNomeDoFuncionario("Arthur Ruan");

    p2->setValorPagamento(2000);
    p2->setNomeDoFuncionario("Lucas");


    cout << "\nNome: " << p1->getNomeDoFuncionario() << endl << "Pagamento: " << p1->getValorPagamento() << endl;
    cout << "\nNome: " << p2->getNomeDoFuncionario() << endl << "Pagamento: " << p2->getValorPagamento() << endl;

    ControleDePagamento* c1 = new ControleDePagamento();

    c1->setPagamentos(*p1, 1);
    c1->setPagamentos(*p2, 2);

    cout << "\nTotal de Pagamentos efetuados: " << c1->calculaTotalDePagamentos() << endl;

    if(c1->exitePagamentoParaFuncionario("Arthur Ruan")){
        cout << "Pagamento realizado.\n";
    }else{
        cout << "Pagamento nao existente.\n";
    }

    return 0;
}