#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	puts("Olá Mundo!"); //--> printf("Olá Mundo!\n");

	puts("Olá");
	puts("Mundo");
}