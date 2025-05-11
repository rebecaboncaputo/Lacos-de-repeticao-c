#include <stdio.h>

int main() {
    int n, i, primo = 1;
    printf("Digite um número: ");
    scanf("%d", &n);


    if (n <= 1) {
        primo = 0;
    }
    else {

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("%d e primo.\n", n);
    }
    else {
        printf("%d não e primo.\n", n);
    }

    return 0;
}

