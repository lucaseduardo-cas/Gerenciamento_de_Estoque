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

    int opcao;
	
    printf("[1] Adicionar produto\n");
	printf("[2] Consultar estoque\n");
	printf("[3] Vender produto\n");
	printf("[4] Sair\n");
	printf("Opção: ");
	scanf("%d", &opcao);
	printf("\n");

	
	
	system("pause");
	return 0;
}