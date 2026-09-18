#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "entregas.h"

void ExibirValoresDistancia (void) 
    {
        printf ("==========Valores por distancia==========\n");
        printf ("Maior que 0 km e até 5 km..........R$8,00\n");
        printf ("Acima de 5 km e até 15 km.........R$12,00\n");
        printf ("Acima de 15 km e até 30 km .......R$18,00\n");
        printf ("Acima de 30 km ...................R$25,00\n");
        printf ("O valor será somado ao calculo de distancia x 1,20R$\n\n");
    }

    float CalculoValorDistancia (void) 
    {
        int distancia;
        float ValorD, subtotalinicial;

            printf ("Qual foi a distancia percorrida? ");
            scanf ("%d", &distancia);

            while (distancia <= 0)
            {
                printf ("Distancia invalida\n");
                printf ("Digite a distancia percorrida novamente: ");
                scanf ("%d", &distancia);
            }
                
            if (distancia > 0 && 5 >= distancia) {     
                ValorD = 8.0;
            } else if (distancia > 5 && 15 >= distancia) {
                ValorD = 12.0;
            } else if (distancia > 15 && 30 >= distancia) {
                ValorD = 18.0;
            } else if (distancia > 30) {
                ValorD = 25.0;
            }
            
        subtotalinicial = ValorD + (distancia * 1.20);

        return subtotalinicial;
    }