#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int prog0107() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	printf("\nAqui vai um Apito\a\n");
	system("PAUSE");
	printf("\nAqui vai um Apito\7");
}