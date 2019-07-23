#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

using namespace std;

class Despesa{
    public:
        Despesa();
        
        double getValor();
        string getTipoDeGasto();

        void setValor(double v);
        void setTipoDeGasto(string tdg);

    private:
        double valor;
        string tipoDeGasto;

};

#endif // DESPESA_H
