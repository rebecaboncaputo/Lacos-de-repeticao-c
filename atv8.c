#include <stdio.h>

int main() {

int naruto;
int sasuke ;
int resultado = 1;


    printf("Escreva um numero para receber o fatorial dele: ");
        scanf("%d" , &naruto);

    for (int i = 1; i <= naruto; i++) {

        resultado *= i; // 1 = 1 x 1 --  2 = 1 x 2  --  2= 2 x 3  --  6 = 6 x 4  --  24 =  24 x 5.

        printf("%d\n", resultado );
    }



    return 0;
}
