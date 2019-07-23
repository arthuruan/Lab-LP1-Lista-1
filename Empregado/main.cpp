#include <iostream>
#include "Empregado.h"

using namespace std;

int main(void){

    Empregado* e1 = new Empregado();
    Empregado* e2 = new Empregado();

    e1->setNome("");
    e1->setSobrenome("\n");
    e1->setSalario(-1);

    cout << "Empregado 1\n" << "Nome : " << e1->getNome() << endl << "Sobrenome : " << 
    e1->getSobrenome() << endl << "Salario : " << e1->getSalario() << endl << endl; 

    e2->setNome("Arthur");
    e2->setSobrenome("Ruan");
    e2->setSalario(50);

    cout << "Empregado 2\n" << "Nome : " << e2->getNome() << endl << "Sobrenome : " << 
    e2->getSobrenome() << endl << "Salario mensal: " << e2->getSalario() << endl 
    << "Salario anual: " << e2->getSalario() * 12 << endl; 
    
    cout << "\nSalario com aumento de 10% : " << e2->getSalario() * 1.1 << endl 
    << "Novo salario anual: " << e2->getSalario() * 1.1 * 12 << endl;
    
    return 0;
}
