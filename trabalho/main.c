#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "entregas.h"

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");

	float subtotalinicial;
	float adicionalpeso;
	float adicionalmodalidade;
	float adicionalprotecao;
	float adicionaltentativas;
	float valorfinal;
	int repetir = 1;

	while (repetir == 1)
	{
		ExibirValoresDistancia ();

		subtotalinicial = CalculoValorDistancia ();
		
		printf ("Subtotal inicial: %.2f\n\n", subtotalinicial);

		ExibirValoresPeso ();

		adicionalpeso = (subtotalinicial * CalculoValorPeso()) - subtotalinicial;

		printf ("Adicional pelo peso: %.2f\n\n", adicionalpeso);

		MenuModalidade ();

		adicionalmodalidade = (subtotalinicial * Modalidade ()) - subtotalinicial;

		printf ("Adicional pela modalidade: %.2f\n\n", adicionalmodalidade);

		adicionalprotecao = Protecao ();

		adicionaltentativas = Tentativas ();

		valorfinal = ValorTotalEntrega (subtotalinicial, adicionalpeso, adicionalmodalidade, adicionalprotecao, adicionaltentativas);

		repetir = Repeticao ();
	}
	
	
	return 0;
} 