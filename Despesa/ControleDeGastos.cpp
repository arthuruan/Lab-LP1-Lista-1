#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>

using namespace std;

ControleDeGastos::ControleDeGastos(){
    for(int i = 0; i < 10; i++){
        despesas[i] = Despesa();
    }
    
}

void ControleDeGastos::setDespesas(Despesa d, int pos){
        despesas[pos].setValor(d.getValor());
        despesas[pos].setTipoDeGasto(d.getTipoDeGasto());
}

double ControleDeGastos::calculaTotalDeDespesas(){
    double soma;
    for(int i = 0; i < 10; i++){
        soma += despesas[i].getValor();
    }
    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string tip){
    for(int i = 0; i < 10; i++){
        if(despesas[i].getTipoDeGasto() == tip){
            return true;
        }   
    }
    return false;
}