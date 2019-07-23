#include <iostream>
#include "Invoice.h"

using namespace std;

int main(void){
    Invoice* i1 = new Invoice();

    i1->setNumero(-1);
    i1->setDescricao("");
    i1->setQuantidade(-5);
    i1->setPreco(-2);

    cout << "Item 1 \n" << "Numero : " << i1->getNumero() << endl << "Descricao : " <<  i1->getDescricao() << endl 
    << "Preco : " << i1->getPreco() << endl << endl;

    i1->setNumero(78989);
    i1->setDescricao("mouse");
    i1->setQuantidade(15);
    i1->setPreco(2.00);

    cout << "Item 1 \n" << "Numero : " << i1->getNumero() << endl << "Descricao : " <<  i1->getDescricao() << endl 
    << "Preco : " << i1->getPreco() << endl << "Valor total : " << i1->getInvoiceAmount();

    return 0;
}
