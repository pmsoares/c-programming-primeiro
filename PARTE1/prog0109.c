#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	puts("Ol� Mundo!"); //--> printf("Ol� Mundo!\n");

	puts("Ol�");
	puts("Mundo");
}