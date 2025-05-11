
#include <stdio.h>


int main() {
int base;
int expoente;
int vezes_multiplicadas = 0;
int resultado = 1;

  printf("Escreva a base de um numero inteiro positivo: ");
    scanf("%d", &base);
        printf("Escreva o exponte de um numero inteiro positivo: ");
    scanf("%d", &expoente);

while(vezes_multiplicadas < expoente){
    resultado = resultado * base;
    vezes_multiplicadas++;

printf("resultado ao longo do while: %d\n", resultado);

}





    return 0;
}


