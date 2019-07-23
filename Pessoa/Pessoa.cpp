#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string n){
    setNome(n);
    idade = 1;
    telefone = "Sem telefone";
}

Pessoa::Pessoa(string n, int i, string t){
    setNome(n);
    setIdade(i);
    setTelefone(t);
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(string n){
    if(n == "" && n == "\n"){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Pessoa::setIdade(int i){
    if(i < 0 || i > 200){
        idade = 1;
    }else{
        idade = i;
    }
}

void Pessoa::setTelefone(string t){
    if(t == "" && t == "\n"){
        telefone = "Sem telefone";
    }else{
        telefone = t;
    }
}