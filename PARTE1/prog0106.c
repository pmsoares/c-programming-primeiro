#include <stdio.h>
#include <locale.h>

void prog0106() {
	setlocale(LC_ALL, "Portuguese_Portugal");
	
	printf("\n1 -\tClientes\n");
	printf("2 -\tFornecedores\n");
	printf("3 -\tFaturas\n\n");
	printf("0 -\tSair\n");
}