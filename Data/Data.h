#ifndef DATA_H
#define DATA_H

using namespace std;

class Data{

    private:
        int dia, mes, ano;
    public:
        Data();

        int getDia();
        int getMes();
        int getAno();

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        void AvancarDia();

};

#endif // DATA_H
