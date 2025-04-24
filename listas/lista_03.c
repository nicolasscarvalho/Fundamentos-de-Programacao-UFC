#include <stdio.h>

#define N 10

int main() {
    // printf("\n============================ QUESTÃO 01 ============================\n");
    // int L[N] = {1,2,3,4,5,6,7,8,9,10};

    // float media;
    
    // media = 0;
    // int i;

    // for (i = 0; i < N; i++) {
    //     media += (float)L[i];
    // }

    // media /= N;
    // printf("Média da lista: %f\n", media);



    // printf("\n============================ QUESTÃO 02 ============================\n");
    // int L[N] = {1,2,3,4,5,6,7,8,9,10};

    // float media = 0.0;
    // int i, mm;
    
    // for (i = 0; i < N; i++) {
    //     media += (float)L[i];
    // }
    // media /= N;


    // mm = 0;
    // for (i = 0; i < N; i++) {
    //     if (L[i] > media) mm ++;
    // }

    // printf("Média da lista: %f, Maiores que a média: %d\n", media, mm);



    // printf("\n============================ QUESTÃO 03 ============================\n");
    // int L[N] = {1,2,1,3,1,4,1,5,1,6};
    // int resposta;

    // resposta = 0;

    // for (int i = 0; i < N-1; i++) {
    //     if (L[i] == L[i+1]) {resposta=1; break;};
    // }

    // printf("Números consecutivos iguais: %d\n", resposta);



    // printf("\n============================ QUESTÃO 04 ============================\n");
    int L[N] = {1,2,3,4,5,6,7,8,9,10};
    int mimpar, smimpar, temp;

    mimpar, smimpar = -1, -1;


    for (int i=0; i < N; i++) {
        for (int j=i; j < N; j++){
            if (L[i] > L[j]){
                temp = L[i];
                L[i] = L[j];
                L[j] = temp;
            }
        }
    } 

    mimpar = L[0];
    int encontrados = 0;

    for (int i = 1; i < N; i++) {
        if (L[i] < mimpar && encontrados == 2) {
            smimpar = L[i];
            break;
        }
    }

    printf("Menor ímpar: %d, Segundo ímpar menor: %d\n", mimpar, smimpar);

    return 0;
}