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
	
	struct cadastro Cadastro;
	
	char nome[20];
	int opcao, qtd;
	float preco;
	int i;
	
	do {
		printf("[1] Adicionar produto\n");
		printf("[2] Consultar estoque\n");
		printf("[3] Vender produto\n");
		printf("[4] Sair\n");
		printf("Opção: ");
		scanf("%d", &opcao);
		printf("\n");
	
		switch(opcao) {
			case 1:
				printf("Nome: ");
				scanf("%s", &Cadastro.nome);
				printf("Quantidade: ");
				scanf("%d", &Cadastro.qtd);
				printf("Preço: R$ ");
				scanf("%d", &Cadastro.preco);
				printf("\n");
				break;
				
			case 2: 
				break;
				
			case 3: 
				break;
				
			case 4:
				break;	
			
			default: 
				printf("Valor inválido!");
				break; 
		}
	} while(1);
	
	system("pause");
	return 0;
}