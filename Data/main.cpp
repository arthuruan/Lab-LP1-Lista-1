#include <iostream>
#include <stdio.h>
#include "Data.h"

using namespace std;

int main(void){

    Data* d1 = new Data();

    d1->setDia(-1);
    d1->setMes(-5);
    d1->setAno(-10);

    printf("Data invalida : %02d/%02d/%04d\n", d1->getDia(), d1->getMes(), d1->getAno());

    d1->setDia(31);
    d1->setMes(12);
    d1->setAno(2019);

    for(int i = 0; i < 31; i++){
        printf("Data Avanca : %02d/%02d/%04d\n", d1->getDia(), d1->getMes(), d1->getAno());
        d1->AvancarDia();
    }
    
    return 0;
}
