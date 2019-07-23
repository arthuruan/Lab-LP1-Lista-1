#include "Empregado.h"
#include <iostream>

Empregado::Empregado(){
    nome = "Sem nome";
    sobrenome = "Sem sobrenome";
    salario = 0.0;
}

string Empregado::getNome(){
    return nome;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}

void Empregado::setNome(string n){
    if(n == "" || n == "\n"){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Empregado::setSobrenome(string sn){
    if(sn == "" || sn == "\n"){
        sobrenome = "Sem sobrenome";
    }else{
        sobrenome = sn;
    }
}

void Empregado::setSalario(double s){
    if(s < 0){
        salario = 0;
    }else{
        salario = s;
    }
}