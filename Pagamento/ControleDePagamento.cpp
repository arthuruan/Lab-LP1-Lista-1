#include <iostream>
#include "ControleDePagamento.h"
#include "Pagamento.h"

using namespace std;

ControleDePagamento::ControleDePagamento(){
    for(int i = 0; i < 10; i++){
        pagamentos[i] = Pagamento();

    }
}

void ControleDePagamento::setPagamentos(Pagamento p, int pos){
    pagamentos[pos].setValorPagamento(p.getValorPagamento());
    pagamentos[pos].setNomeDoFuncionario(p.getNomeDoFuncionario());
}

double ControleDePagamento::calculaTotalDePagamentos(){
    double soma = 0;

    for(int i = 0; i < 10; i++){
        soma += pagamentos[i].getValorPagamento();
    }

    return soma;
}

bool ControleDePagamento::exitePagamentoParaFuncionario(string nome){
    for(int i = 0; i < 10; i++){
        if(pagamentos[i].getNomeDoFuncionario() == nome){
            return true;
        }
    }
    return false;
}