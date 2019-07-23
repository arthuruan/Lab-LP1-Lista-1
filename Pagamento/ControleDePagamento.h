#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H
#include <iostream>
#include "Pagamento.h"

using namespace std;

class ControleDePagamento{
    public:
        ControleDePagamento();
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalDePagamentos();
        bool exitePagamentoParaFuncionario(string nome);

    private:
        Pagamento pagamentos[10];
};

#endif // CONTROLEDEPAGAMENTO_H