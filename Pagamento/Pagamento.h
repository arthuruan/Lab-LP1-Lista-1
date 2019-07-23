#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

using namespace std;

class Pagamento{
    public:
        Pagamento();

        double getValorPagamento();
        string getNomeDoFuncionario();

        void setValorPagamento(double vp);
        void setNomeDoFuncionario(string n);

    private:
        double valorPagamento;
        string nomeDoFuncionario;

};

#endif // PAGAMENTO_H