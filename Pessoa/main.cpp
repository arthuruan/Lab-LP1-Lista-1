#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(void){

    Pessoa* p1 = new Pessoa("Arthur");
    Pessoa* p2 = new Pessoa("Ruan", 18, "8750-9982");

    cout << "\nNome: " << p1->getNome() << endl << "Idade: " << p1->getIdade() << endl << "Telefone: " << p1->getTelefone() << endl << endl;

    p1->setIdade(19);
    p1->setTelefone("987935160");

    cout << "Nome: " << p1->getNome() << endl << "Idade: " << p1->getIdade() << endl << "Telefone: " << p1->getTelefone() << endl << endl;

    cout << "Nome: " << p2->getNome() << endl << "Idade: " << p2->getIdade() << endl << "Telefone: " << p2->getTelefone() << endl << endl;

    return 0;
}
