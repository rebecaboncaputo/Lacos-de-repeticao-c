
#include <stdio.h>


int main() {

float orcamento;
float acumulador = 0;
float soma_acumulador;
    do {
        printf("Escreva o valor do seu orcamento: ");
            scanf("%f", &orcamento);

        if(orcamento < 100){
            printf("Saldo insuficiente, digite um orcamento maior que 100. \n");}

    }while(orcamento < 100);


    do {
        printf("\nDigite um valor de servico: ");
            scanf("%f", &acumulador);
       soma_acumulador += acumulador; // soma acumulador = asoma acumulador(0) + acumulador(10) = soma acumulador = 10

        printf("seu valor de servico gasto atual: %.2f\n" , soma_acumulador);

    }while(soma_acumulador < orcamento);


    if( soma_acumulador == orcamento)
        {printf("\nSeu valor de servico atingiu o limite ");
    }else if (soma_acumulador > orcamento)
         {printf("\nSeu valor de servico ultrapassou o limite");
    }




    return 0;
}



