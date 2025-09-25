#include <stdio.h>
#include "Prototipos.h"

    int main(void){

        int A,B;

        printf("Entre com valores: ");
        scanf("%d %d",&A,&B);

        int Resultado = MaximoD(A,B);

        printf("\n%d",Resultado);

        return 0;
    }