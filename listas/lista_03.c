#include <stdio.h>

int main() {
    // printf("\n============================ QUESTÃO 01 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};

    // float media;
    
    // media = 0;
    // int i;

    // for (i = 0; i < N; i++) {
    //     media += (float)L[i];
    // }

    // media /= N;
    // printf("Média da lista: %f\n", media);



    // printf("\n============================ QUESTÃO 02 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};

    // float media = 0.0;
    // int mm;
    
    // for (int i = 0; i < N; i++) {
    //     media += (float)L[i];
    // }
    // media /= N;


    // mm = 0;
    // for (int i = 0; i < N; i++) {
    //     if (L[i] > media) mm ++;
    // }

    // printf("Média da lista: %f, Maiores que a média: %d\n", media, mm);



    // printf("\n============================ QUESTÃO 03 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};
    // int resposta;

    // resposta = 0;

    // for (int i = 0; i < N-1; i++) {
    //     if (L[i] == L[i+1]) {resposta=1; break;};
    // }

    // printf("Números consecutivos iguais: %d\n", resposta);



    // printf("\n============================ QUESTÃO 04 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};
    // int mimpar;
    
    // mimpar = -1;
    
    // for (int i = 0; i < N; i++) {
    //     if (L[i] % 2 == 1) {
    //         if(mimpar == -1) mimpar = L[i];
    //         else if(L[i] < mimpar) mimpar = L[i];
    //     }
    // }

    // printf("Menor ímpar: %d", mimpar);



    // printf("\n============================ QUESTÃO 05 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};
    // int mimpar, smimpar, temp;

    // mimpar = -1;
    // smimpar = -1;

    // for (int i = 0; i < N-1; i++) {
    //     for (int j = i+1; j < N; j++){
    //         if (L[i] > L[j]) {
    //             temp = L[i];
    //             L[i] = L[j];
    //             L[j] = temp;
    //             continue;
    //         }
    //     }
    // }

    // for (int i = 0; i < N; i++){
    //     if (L[i] % 2 == 1) {

    //         if (mimpar != -1 && L[i] > mimpar) {
    //             smimpar = L[i];
    //             break;
    //         }

    //         mimpar = L[i];

    //     }
    // }

    // printf("Segundo ímpar menor: %d\n", smimpar);



    // printf("\n============================ QUESTÃO 06 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};
    // int tmaior, temp, counter;

    // for (int i = 0; i < N-1; i++) {
    //     for (int j = i+1; j < N; j++){
    //         if (L[i] > L[j]) {
    //             temp = L[i];
    //             L[i] = L[j];
    //             L[j] = temp;
    //             continue;
    //         }
    //     }
    // }

    // counter = 0;

    // for (int i = N-1; i >= 0; i--) {
    //     tmaior = L[i];
    //     counter ++;

    //     if (counter == 3) break;
    // }

    // printf("Terceiro maior: %d\n", tmaior);    



    // printf("\n============================ QUESTÃO 07 ============================\n");
    // int L[] = {1,2,3,4,5,6,7,8,9,10};
    // int temp;

    // int k = 79;
    // int mmk = -1;

    // for (int i = 0; i < N-1; i++) {
    //     for (int j = i+1; j < N; j++){
    //         if (L[i] > L[j]) {
    //             temp = L[i];
    //             L[i] = L[j];
    //             L[j] = temp;
    //             continue;
    //         }
    //     }
    // }


    // for (int i = N-1; i >= 0; i--) {
    //     if (L[i] < k) {
    //         mmk = L[i];
    //         break;
    //     }
    // }

    // printf("Primeiro menor que K: %d\n", mmk);

    return 0;
}