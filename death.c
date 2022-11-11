#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int escreve(char frase []) {
	char arrayfrase[500];
	sprintf( arrayfrase, frase);
	int tamanho = strlen ( arrayfrase);
	char *token = strtok ( arrayfrase, " ");

	while(token != NULL) {
		printf(" %s", token);
		token = strtok(NULL, " ");
		system("sleep 0.0001");
	}
}

void main ()
{
	setlocale(LC_ALL, "");
	escreve("Há um serial killer à solta em Los Angeles e as autoridades locais precisam de ajuda rápida.\n");

}