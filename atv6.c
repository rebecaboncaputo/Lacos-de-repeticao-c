#include <stdio.h>

int main() {

int sonic;
int shadow;
    printf("Escreva um numero inteiro para calcular sua tabuada: ");
        scanf("%d", &sonic);

    for (int i = 1; i < 11; i++) {
           shadow = sonic*i;
        printf("%d x %d = %d\n", sonic , i, shadow);
    }

//sim e possivel fazer a atividade com while

    return 0;
}
