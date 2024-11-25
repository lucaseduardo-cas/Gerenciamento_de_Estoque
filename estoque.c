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
	
	struct cadastro produtos[100]; 
    int cont_produtos = 0;  
    int opcao;
	
	
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
				 printf("ADICIONAR PRODUTO\n");
                    printf("Nome: ");
                    scanf("%s", produtos[cont_produtos].nome);
                    printf("Quantidade: ");
                    scanf("%d", &produtos[cont_produtos].qtd);
                    printf("Preço: R$ ");
                    scanf("%f", &produtos[cont_produtos].preco);
                    cont_produtos++;  
                    printf("Produto adicionado com sucesso!\n\n");
                } else {
                    printf("Capacidade máxima de produtos atingida!\n\n");
                }
				break;
				
			case 2: 
				printf("CONSULTA DE ESTOQUE");
				printf("Produto: %s\n", Cadastro.nome);
                printf("Quantidade em estoque: %d\n", Cadastro.qtd);
                printf("Preço unitário: R$ %.2f\n\n", Cadastro.preco);
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