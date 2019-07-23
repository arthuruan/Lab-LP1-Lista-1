#ifndef INVOICE_H
#define INVOICE_H

using namespace std;

class Invoice
{
    public:
        Invoice();

        int getNumero();
        string getDescricao();
        int getQuantidade();
        double getPreco();

        void setNumero(int n);
        void setDescricao(string d);
        void setQuantidade(int q);
        void setPreco(double p);

        double getInvoiceAmount();

    private:
        int numero;
        string descricao;
        int quantidade;
        double preco;
};

#endif // INVOICE_H
