#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct cadastro {
    char nome[20];
    int qtd;
    float preco;
};

// Função para adicionar produtos
void adicionarProduto(struct cadastro produtos[], int *cont_produtos) {
    if (*cont_produtos < 100) {
        printf("ADICIONAR PRODUTO\n");
        printf("Nome: ");
        scanf("%s", produtos[*cont_produtos].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[*cont_produtos].qtd);
        printf("Preço: R$ ");
        scanf("%f", &produtos[*cont_produtos].preco);
        (*cont_produtos)++;
        printf("Produto adicionado com sucesso!\n\n");
    } else {
        printf("Capacidade máxima de produtos atingida!\n\n");
    }
}

// Função para consultar o estoque
void consultarEstoque(struct cadastro produtos[], int cont_produtos) {
    if (cont_produtos == 0) {
        printf("Nenhum produto cadastrado.\n\n");
    } else {
        printf("CONSULTA DE ESTOQUE\n");
        for (int i = 0; i < cont_produtos; i++) {
            printf("Produto %d: %s\n", i + 1, produtos[i].nome);
            printf("Quantidade em estoque: %d\n", produtos[i].qtd);
            printf("Preço unitário: R$ %.2f\n\n", produtos[i].preco);
        }
    }
}

// Função para vender produtos
void venderProduto(struct cadastro produtos[], int cont_produtos) {
    if (cont_produtos == 0) {
        printf("Nenhum produto cadastrado.\n\n");
    } else {
        char nome_produto[20];
        int qtd_venda, encontrado = 0;
        printf("VENDA DE PRODUTOS\n");
        printf("Digite o nome do produto a ser vendido: ");
        scanf("%s", nome_produto);

        for (int i = 0; i < cont_produtos; i++) {
            if (strcmp(produtos[i].nome, nome_produto) == 0) {
                encontrado = 1;
                printf("Produto encontrado: %s\n", produtos[i].nome);
                printf("Quantidade em estoque: %d\n", produtos[i].qtd);
                printf("Digite a quantidade a ser vendida: ");
                scanf("%d", &qtd_venda);

                if (qtd_venda <= produtos[i].qtd) {
                    produtos[i].qtd -= qtd_venda;
                    printf("Venda realizada com sucesso! Estoque atualizado.\n\n");
                } else {
                    printf("Erro: Quantidade solicitada maior que a disponível em estoque.\n\n");
                }
                break;
            }
        }

        if (!encontrado) {
            printf("Erro: Produto não encontrado no estoque.\n\n");
        }
    }
}

int main(void) {
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
                adicionarProduto(produtos, &cont_produtos);
                break;
            case 2:
                consultarEstoque(produtos, cont_produtos);
                break;
            case 3:
                venderProduto(produtos, cont_produtos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Valor inválido! Tente novamente.\n");
                break;
        }
    } while(opcao != 4);

    system("pause");
    return 0;
}
