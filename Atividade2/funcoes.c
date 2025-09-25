#include <stdio.h>
#include "Prototipos.h"
void fogo(int a){
    getchar();
    if(a == 0)
        printf("Fogo");
    else
        fogo(a-1);
    
}