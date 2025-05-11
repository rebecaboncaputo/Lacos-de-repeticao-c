
#include <stdio.h>


int main() {

int sana;
int momo_conta = 0;
int mina_soma = 0;



        do {
printf("\n a media e calculada com cada numero digitado\n");
            printf(" Escreva  um numero: \n");
                    scanf("%d" , &sana);

                     if (sana < 0) {
            break;
        }

        momo_conta += sana;//momo_conta = sana + momo_conta;
        mina_soma++;


         if (mina_soma > 0) {
            float media = (float)momo_conta / mina_soma;
                printf(" Sua media: %.2f", media );

    } else {
        printf("\nNenhum número positivo foi digitado.\n");
    }




    }while(1);


printf("Programa encerrado");

    return 0;
}
