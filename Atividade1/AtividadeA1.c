#include <stdio.h>
#include "AtividadeA3.h"

    int main(void){
        int a,b;
        printf("Entre com valores: ");
        scanf("%d %d",&a,&b);

        int resultado = potencia(a,b);

        printf("%d",resultado);
        printf("\n");

        return 0;
    }