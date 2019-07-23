#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>

using namespace std;

class Empregado{
    public:

        Empregado();

        string getNome();
        string getSobrenome();
        double getSalario();

        void setNome(string n);
        void setSobrenome(string sn);
        void setSalario(double s);

    private:

        string nome;
        string sobrenome;
        double salario;
};

#endif // EMPREGADO_H
