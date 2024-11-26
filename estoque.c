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
