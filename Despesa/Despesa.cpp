#include "Despesa.h"
#include <iostream>

using namespace std;

Despesa::Despesa(){
    valor = 0.0;
    tipoDeGasto = "Sem gasto";
}

double Despesa::getValor(){
    return valor;
}

string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}

void Despesa::setValor(double v){
    if(v < 0){
        valor = 0;
    }else{
        valor = v;
    }
}

void Despesa::setTipoDeGasto(string tdg){
    if(tdg == "" && tdg == "\n"){
        tipoDeGasto = "Sem gasto";
    }else{
        tipoDeGasto = tdg;
    }
}