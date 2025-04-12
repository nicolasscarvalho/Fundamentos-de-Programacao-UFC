#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main(){
    // printf("\n============================ QUESTÃO 01 ============================\n");
    // float ax, ay, bx, by;
    // scanf("%f %f %f %f", &ax, &ay, &bx, &by);

    // printf("Distância entre (%f, %f) e (%f, %f) é %f\n",
    //         ax, ay, bx, by, sqrt(pow(ax-bx,2) + pow(ay-by,2)));



    // printf("\n============================ QUESTÃO 02 ============================\n");
    // float temperatura_fahrenheit;

    // printf("Digite uma temperatura em graus Fahrenheit: ");
    // scanf("%f", &temperatura_fahrenheit);
    
    // printf("%f°F equivale a %f°C\n", temperatura_fahrenheit, (5.0f/9.0) * (temperatura_fahrenheit-32));



    // printf("\n============================ QUESTÃO 03 ============================\n");
    // float temperatura_celsius;

    // printf("Digite uma temperatura em graus Celsius: ");
    // scanf("%f", &temperatura_celsius);
    
    // printf("%f°C equivale a %f°F\n", temperatura_celsius, 32 + (temperatura_celsius * 9/5));



    // printf("\n============================ QUESTÃO 04 ============================\n");
    // uint16_t numero, centenas, dezenas, unidades;

    // printf("Digite um número de 1 a 999: ");
    // scanf("%hu", &numero);


    // if(1 <= numero && numero <= 999){
    //     centenas = numero / 100;
    //     dezenas = (numero - centenas * 100) / 10;
    //     unidades = numero - (centenas * 100) - (dezenas * 10);

    //     printf("A soma dos algarismos de %u é %u\n", numero, centenas+dezenas+unidades);
    // }
    // else printf("O número não pertence ao intervalo permitido\n");



    // printf("\n============================ QUESTÃO 05 ============================\n");
    // uint8_t centenas, dezenas, unidades;

    // printf("Digite valores para, respectivamente, centenas, dezenas e unidades de um número: ");
    // scanf("%hhu %hhu %hhu", &centenas, &dezenas, &unidades);

    // printf("O número formado por essas centenas, dezenas, unidades é %u\n", centenas*100 + dezenas*10 + unidades);
    


    // printf("\n============================ QUESTÃO 06 ============================\n");
    // uint8_t b3, b2, b1, b0;

    // printf("Digite quatro algarismos de um binário qualquer: \n");
    // scanf("%hhu %hhu %hhu %hhu", &b3, &b2, &b1, &b0);

    // uint8_t binario_em_decimal = b0 + (b1 * 2) + (b2 * 4) + (b3 * 8);
    // printf("%u%u%u%u em binário equivale a %u em decimal\n", b3, b2, b1, b0, binario_em_decimal);



    // printf("\n============================ QUESTÃO 07 ============================\n");
    // uint8_t numero, b0, b1, b2, b3;

    // printf("Digite um número qualquer na base decimal");
    // scanf("%hhu", &numero);

    // if (1 <= numero && numero <= 15){
    //     b0 = numero % 2;
    //     numero /= 2;

    //     b1 = numero % 2;
    //     numero /= 2;

    //     b2 = numero % 2;
    //     numero /= 2;

    //     b3 = numero % 2;

    //     printf("%u em decimal equivale a %u%u%u%u em binário\n", numero, b3, b2, b1, b0);
    // }
    // else printf("O número não pertence ao intervalo permitido\n");



    // printf("\n============================ QUESTÃO 08 ============================\n");
    // uint8_t p, q, r, s;

    // printf("Digite os respectivos valores para p, q, r, s das frações p/q e r/s: ");
    // scanf("%hhu %hhu %hhu %hhu", &p, &q, &r, &s);
    
    // uint16_t checagem_ps, checagem_rs; // p/q > r/s => p*s > r*q (multiplicando ambos os lados por q*s) 
    // checagem_ps = p*s; 
    // checagem_rs= r*q;
    
    // if (checagem_ps > checagem_rs) {
    //     printf("Maior fração: %d/%d\n", p, q);
    // }
    // else if (checagem_ps == checagem_rs){
    //     printf("Ambas frações são iguais:\n");
    // }
    // else {
    //     printf("Maior fração: %d/%d\n", r, s);
    // }



    // printf("\n============================ QUESTÃO 09 ============================\n");
    // float a, b, c, auxiliar;

    // printf("Digite três números quaisquer: ");
    // scanf("%f %f %f", &a, &b, &c);

    // if (a>b){auxiliar = a; a=b; b=auxiliar;}
    // if (a>c){auxiliar = a; a=c; c=auxiliar;}
    // if (b>c){auxiliar = b; b=c; c=auxiliar;}

    // printf("Ordenando os números, ficaria %f, %f, %f\n", a, b, c);



    // printf("\n============================ QUESTÃO 10 ============================\n");
    // float n1, n2, n3, auxiliar;

    // printf("Digite três notas quaisquer: ");
    // scanf("%f %f %f", &n1, &n2, &n3);

    // if (n1>n2){auxiliar = n1; n1=n2; n2=auxiliar;}
    // if (n1>n3){auxiliar = n1; n1=n3; n3=auxiliar;}
    // if (n2>n3){auxiliar = n2; n2=n3; n3=auxiliar;}

    // printf("A média das melhores notas ficaria %f\n", (n2+n3)/2);



    // printf("\n============================ QUESTÃO 11 ============================\n");
    // float x, y, px, py;
    
    // printf("Digite valores para Px, X, Py e Y, sendo X e Y dois números quais quer e Px e Py seus respectivos pesos: ");
    // scanf("%f %f %f %f", &px, &x, &py, &y);

    // if ((px + py) != 0) {
    //     printf("A média ponderada entre esses números é de %f \n", (px * x + py * y) / (px+py));
    // }
    // else printf("Os pesos utilizados são inválidos \n");



    // printf("\n============================ QUESTÃO 12 ============================\n");
    // uint8_t nota;

    // printf("Digite uma nota: ");
    // scanf("%hhu", &nota);

    // if (90 <= nota && nota <= 100) printf("Esta nota pertence a classificação A de alunos\n");
    // else if (80 <= nota && nota < 90) printf("Esta nota pertence a classificação B de alunos\n");
    // else if (70 <= nota && nota < 80) printf("Esta nota pertence a classificação C de alunos\n");
    // else if (60 <= nota && nota < 70) printf("Esta nota pertence a classificação D de alunos\n");
    // else printf("Esta nota pertence a classificação F de alunos\n");



    // printf("\n============================ QUESTÃO 13 ============================\n");
    // float p1, c1, p2, c2, lado_esquerdo, lado_direito; 

    // printf("Digite, respectivamente, valores para peso da criança e comprimento do lado esquerdo e peso da criança e comprimento do lado direito de uma gangorra ");
    // scanf("%f %f %f %f", &p1, &c1, &p2, &c2);


    // lado_esquerdo = p1 * c1;
    // lado_direito = p2 * c2;

    // if (lado_esquerdo > lado_direito) printf("%d\n", -1);
    // else if (lado_esquerdo < lado_direito) printf("%d\n", 1);
    // else printf("%d\n", 0);


    // printf("\n============================ QUESTÃO 14 ============================\n");
    // int numero;

    // printf("Digite um número qualquer: ");
    // scanf("%d", &numero);

    // printf("Esse número pertence a linha %d e coluna %d da tabela\n", numero/4, numero%4);

    return 0;
}