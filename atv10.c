#include <stdio.h>

int main() {
    int num1, num2, m, n, resto, mmc, mdc;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    m = num1;
    n = num2;

    while (n != 0) {
        resto = m % n;
        m = n;
        n = resto;
    }
    mdc = m;
    mmc = (num1 * num2) / mdc;

    printf("MDC de %d e %d = %d\n", num1, num2, mdc);
    printf("MMC de %d e %d = %d\n", num1, num2, mmc);

    return 0;
}
