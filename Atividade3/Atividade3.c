#include <stdio.h>
#include "Prototipo3.h"
    int main(void){

        int A;
        printf("Diga valor: ");
        scanf("%d",&A);
        
        int resultado = soma_digitos(A);

        printf("\n%d",resultado);

        return 0;
    }