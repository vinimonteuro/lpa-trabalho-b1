#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "entregas.h"

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");

	float subtotalinicial;

    ExibirValoresDistancia ();

	subtotalinicial = CalculoValorDistancia ();
	
	printf ("Subtotal inicial: %.2f", subtotalinicial);

	return 0;
} 