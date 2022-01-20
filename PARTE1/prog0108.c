#include <stdio.h>
#include <locale.h>

int prog0108() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	//Escreva um programa em C que indique qual o significado dos seguintes caracteres especiais - \n, \\, \t, %%
	printf("Programa quea()presenta os Caracteres Especiais:\n\n");
	printf("\\n\t-\t<ENTER>\n");
	printf("\\\\\t-\t\\\n");
	printf("\\t\t-\t<TAB>\n");
	printf("%%%%\t-\t%%\n");
}