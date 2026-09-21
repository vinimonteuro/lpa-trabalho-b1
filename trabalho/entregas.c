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

float CalculoValorDistancia (void) {
    int distancia;
    float ValorD, subtotalinicial;

        printf ("Informe a distancia da entrega: ");
        scanf ("%d", &distancia);

        while (distancia <= 0)
            {
                printf ("Valor invalido, digite novamente: ");
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

void ExibirValoresPeso (void) {
        printf ("==========Valores por peso==========\n");
        printf ("Até 2 kg ........................0%%\n");
        printf ("Acima de 2 kg até 5 kg ..........5%%\n");
        printf ("Acima de 5 kg até 10 kg ........10%%\n");
        printf ("Acima de 10 kg .................20%%\n");
        printf ("O adicional do peso será adicionado ao subtotal inicial.\n\n");
    }

float CalculoValorPeso (void) {

    float peso;
    float porcentagemP = 1.0;

    printf ("Informe o peso da encomenda: ");
    scanf ("%f", &peso);

    while (peso <= 0)
    {
        printf ("Valor invalido, digite novamente: ");
        scanf ("%f", &peso);
    }
    
    if (peso <= 2) {
        printf ("Sem valor adicional por peso.\n");
    } else if (peso > 2 && peso <= 5) {
        porcentagemP = 1.05;
    } else if (peso > 5 && peso <=10) {
        porcentagemP = 1.10;
    } else if (peso > 10) {
        porcentagemP = 1.20;
    } else {
        printf ("Valor invalido.");
    }
    return porcentagemP;
}

void MenuModalidade (void) {
    printf ("==========Valores por modalidade==========\n");
    printf ("1 - Econômica ........................ 0%%\n");
    printf ("2 - Expressa ........................ 15%%\n");
    printf ("3 - Prioritária ..................... 30%%\n");
    printf ("O adicional da modalidade será adicionado ao subtotal inicial.\n\n");
}

float Modalidade (void) {
    int opcao;
    float porcentagemM = 1.0;

    printf ("Escolha uma modalidade: ");
    scanf ("%d", &opcao);

        while (opcao < 1 || opcao > 3)
        {
            printf ("Valor invalido, digite novamente: ");
            scanf ("%d", &opcao);
        }

        if (opcao == 1)
            {
                printf ("Modalidade escolhida: Econômica\n");
                printf ("Sem adicional.");
            } else if (opcao == 2) {
                printf ("Modalidade escolhida: Expressa\n");
                porcentagemM = 1.15;
            } else if (opcao == 3) {
                printf ("Modalidade escolhida: Prioritária\n");
                porcentagemM = 1.30;
            } else {
                printf ("Valor invalido.");
            }
return porcentagemM;
}