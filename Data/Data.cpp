#include "Data.h"

using namespace std;

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int d){
    if(d < 1){
        dia = 1;
    }else{
        dia = d;
    }
}

void Data::setMes(int m){
    if(m < 1){
        mes = 1;
    }else{
        mes = m;
    }
}

void Data::setAno(int a){
    if(a < 1){
        ano = 1;
    }else{
        ano = a;
    }
}

void Data::AvancarDia(){
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia == 31){
        if(mes == 12){
            dia = 1;
            mes = 1;
            ano++;
        }else{
            dia = 1;
            mes++;
        }
    }else if(mes == 4 || mes == 6|| mes == 9 || mes == 11 && dia == 30){
        dia = 1;
        mes++;
    }else if(mes == 2 && dia == 28){
        dia = 1;
        mes++;
    }else{
        dia++;
    }
}