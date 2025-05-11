#include <stdio.h>

int main() {

int peppapig;
int georgepig;
int numero1 = 0;
int numero2 = 1;
int numero3;

    printf("Escreva um numero inteiro positivo: ");
        scanf("%d", &peppapig);

    for (int i = 0; i < peppapig; i++) {
        numero3 = numero1 + numero2;
        numero1 = numero2;
        numero2 = numero3;


        printf("%d\n", numero1 );
    }

    return 0;
}

