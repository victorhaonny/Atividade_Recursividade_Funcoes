#include <stdio.h>
#include <stdlib.h>
#include "Prototipo.h"
    int main(void){

        int Espaco, Resultado;
        printf("Diga espaço: ");
        scanf("%d",&Espaco);

        int Vetor[Espaco];

        for(int i=0;i<Espaco;i++){
            Vetor[i] = 2;
        }

       printf("%d",soma_pares(Vetor,Espaco));

        return 0;
    }