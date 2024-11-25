#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

struct cadastro {
	char nome[20];
	int qtd;
	float preco;
};

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	

	
	
	system("pause");
	return 0;
}