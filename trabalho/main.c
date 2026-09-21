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
	int qntecn = 0;
	int qntexp = 0;
	int qntpri = 0;
	int entregaspross = 0;
	float valortotal = 0;
	float maiorvalor = 0.0;
	float menorvalor = 0.0;

	
	do {
		ExibirValoresDistancia ();

		subtotalinicial = CalculoValorDistancia ();
		
		printf ("Subtotal inicial: %.2f\n\n", subtotalinicial);

		ExibirValoresPeso ();

		adicionalpeso = (subtotalinicial * CalculoValorPeso()) - subtotalinicial;

		printf ("Adicional pelo peso: %.2f\n\n", adicionalpeso);

		MenuModalidade ();

		adicionalmodalidade = (subtotalinicial * Modalidade (&qntecn, &qntexp, &qntpri)) - subtotalinicial;

		printf ("Adicional pela modalidade: %.2f\n\n", adicionalmodalidade);

		adicionalprotecao = Protecao ();

		adicionaltentativas = Tentativas ();

		valorfinal = ValorTotalEntrega (subtotalinicial, adicionalpeso, adicionalmodalidade, adicionalprotecao, adicionaltentativas);

		repetir = Repeticao ();
		entregaspross++;
		valortotal += valorfinal;

		if (entregaspross == 1)
	{
		maiorvalor = valorfinal;
		menorvalor = valorfinal;
	} else {
		if (valorfinal > maiorvalor)
		{
			maiorvalor = valorfinal;
		}
		if (valorfinal < menorvalor)
		{
			menorvalor = valorfinal;
		}
	}	
	} while (repetir == 1);
	
	printf ("===========RESUMO===========\n");
	printf ("Numero de entregas processadas: %d\n", entregaspross);
	printf ("Valor total de todas as entregas: %.2f\n", valortotal);
	printf ("Valor medio entregas: %.2f\n", valortotal / entregaspross);
	printf ("Quantidade de entregas economicas: %d\n", qntecn);
	printf ("Quantidade de entregas expressas: %d\n", qntexp);
	printf ("Quantidade de entregas prioritaria: %d\n", qntpri);
	printf ("O maior valor de entrega foi: %.2f\n", maiorvalor);
	printf ("O menor valor de entrega foi: %.2f\n", menorvalor);
	
	return 0;
}