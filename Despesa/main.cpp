#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){
    
    Despesa* d1 = new Despesa();
    Despesa* d2 = new Despesa();
    
    d1->setTipoDeGasto("Computador");
    d1->setValor(1750);

    d2->setTipoDeGasto("mouse");
    d2->setValor(43.70);

    ControleDeGastos* c1 = new ControleDeGastos();

    c1->setDespesas(*d1, 1);
    c1->setDespesas(*d2, 2);


    cout << "Nome do produto: " << d1->getTipoDeGasto() << endl 
    << "Valor: " << d1->getValor() << endl;

    cout << "Nome do produto: " << d2->getTipoDeGasto() << endl 
    << "Valor: " << d2->getValor() << endl;

    cout << "Total de despesas: " << c1->calculaTotalDeDespesas() << endl;

    if(c1->existeDespesaDoTipo("Computador")){
        cout << "Produto existente";
    }else{
        cout << "Produto nao existe";
    }

    return 0;
}
