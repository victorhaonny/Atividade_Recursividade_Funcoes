#include <stdio.h>
#include "AtividadeA3.h"
    int potencia(int base, int expoente){

        getchar();
        if(expoente == 0)
            return 1;
        else
            printf("\n%d - %d",base,expoente);
            return base * potencia(base,expoente-1);

    }