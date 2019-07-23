#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(){
    numero = 0;
    descricao = "Sem descricao";
    quantidade = 0;
    preco = 0.0;
}

int Invoice::getNumero(){
    return numero;
}

string Invoice::getDescricao(){
    return descricao;
}

int Invoice::getQuantidade(){
    return quantidade;
}

double Invoice::getPreco(){
    return preco;
}

void Invoice::setNumero(int n){
    if(n < 0){
        numero = 0;
    }else{
        numero = n;
    }
}

void Invoice::setDescricao(string d){
    if(d == "" || d == "\n"){
        descricao = "Sem descricao";
    }else{
        descricao = d;
    }
}

void Invoice::setQuantidade(int q){
    if(q < 0){
        quantidade = 0;
    }else{
        quantidade = q;
    }
}

void Invoice::setPreco(double p){
    if(p < 0){
        preco = 0;
    }else{
        preco = p;
    }
}

double Invoice::getInvoiceAmount(){
    return quantidade*preco;
}