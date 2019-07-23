#include "Pagamento.h"
#include <iostream>

using namespace std;

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeDoFuncionario = "Sem nome";
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double vp){
    if(vp < 0){
        valorPagamento = 0;
    }else{
        valorPagamento = vp;
    }
}

void Pagamento::setNomeDoFuncionario(string n){
    if(n == "" || n == "\n"){
        nomeDoFuncionario = "Sem nome";
    }else{
        nomeDoFuncionario = n;
    }
}