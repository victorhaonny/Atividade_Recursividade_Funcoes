#include "Prototipo.h"
    int soma_pares(int Vetor[],int tamanho){

        int soma = 0;

        if(tamanho == 0)
            return soma;
        else if(Vetor[tamanho-1] % 2 == 0){
            soma += Vetor[tamanho-1];
            return soma + soma_pares(Vetor,tamanho-=1);
        }
        else
            return soma + soma_pares(Vetor,tamanho-=1);
    }