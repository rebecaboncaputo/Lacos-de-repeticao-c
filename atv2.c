
#include <stdio.h>


int main() {

  int giselle_doaespa;
  int karina_doaespa;
  int winter_doaespa;


    do {

             printf(" Escreva um numero: ");
                scanf("%d",&giselle_doaespa);

           if(giselle_doaespa > 0){
                karina_doaespa++;

           }else if (giselle_doaespa < 0){
                winter_doaespa++;
           }

    printf("Numeros positivos digitados: %d\n", karina_doaespa);
    printf("Numeros negativos digitados: %d\n", winter_doaespa);

    }while(giselle_doaespa != 0);






    return 0;
}

