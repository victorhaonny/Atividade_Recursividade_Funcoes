#include <stdio.h>
#include "Prototipo3.h"

int soma_digitos(int a){
       
    getchar();
    if(a<10)
        return a;
    else if (a % 10 > 0 && a/10 > 0)
        return soma_digitos((a/10 )+ (a%10));
    else {
        a = a/10;
        return soma_digitos(a);
    }
}