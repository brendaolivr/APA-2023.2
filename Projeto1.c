#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct lista{
	int id;
	char produto[32];
	struct lista *prox;
};typedef struct lista lista;

void inserir(int id, lista **prod){
	lista *novoproduto = (lista*)malloc(sizeof(lista));
	(*novoproduto).id = id;
	printf("Digite o nome do produto: ");
	scanf("%s", (*novoproduto).produto);
	(*novoproduto).prox = *prod;
	(*prod) = novoproduto;
}

void procurar(lista *prod){
	clock_t t;
	char nomeProd[32];
	printf("Digite o nome do produto que deseja procurar: ");
	scanf("%s", nomeProd);
	t=clock();
	while(prod != NULL){
		if(strcmp(nomeProd,(*prod).produto) == 0){
			printf("\nProduto encontrado!\n");
			printf("Produto: %s\n",(*prod).produto);
			printf("ID: %i\n",(*prod).id);
		}
		prod = (*prod).prox;
	}
	t=clock()-t;
	printf("Tempo de execucao de busca: %.1lfms", ((double)t)/((CLOCKS_PER_SEC/1000)));
}

void imprimir(lista *prod){
	printf("\nLista dos Produtos:\n");
	while(prod != NULL){
		printf("ID:%i|Produto: %s\n",(*prod).id,(*prod).produto);
		prod = (*prod).prox;
	}
}

int main(){
	lista *produtos;
	int reg = 1;
	int resp;
	produtos = NULL;
	do{
		inserir(reg,&produtos);
		imprimir(produtos);
		printf("\nAdicionar produto? (1-sim;2-nao)\n");
		scanf("%i",&resp);
		reg++;
	}while(resp==1);
	procurar(produtos);
	imprimir(produtos);
}
