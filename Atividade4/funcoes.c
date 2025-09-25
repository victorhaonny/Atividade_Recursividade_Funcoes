#include <stdio.h>
#include "Prototipos.h"

int MaximoD(int a,int b){

    if(b == 0)
        return a;
    else if(a/b != 1 && a % b == 0)
        MaximoD(a/b,b+1);
    else if(a % b != 0)
        MaximoD(a,b+1);
    else
        return b;
}