#include <stdio.h>
#include "Prototipo3.h"

int soma_digitos(int a){

    if(a<10)
        return a;
    else if(a % 10 != 0)
        soma_digitos(a = (a % 10) + (a/10));

}