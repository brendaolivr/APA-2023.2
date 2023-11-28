/*Fazer a tabela do brasileirão, buscar nome e posição,
exibir os 5 primeiros colocados, os 5 últimos colocados
e exibir a diferença de pontos dos 5 últimos e exibir a
diferença de pontos dos 5 primeiros e reordenar a tabela
para exibir metade dos times*/

#include <stdio.h>
#include <stdlib.h>

void preencheTabela(char time, int *pontos){
	time[20][40]={"Palmeiras","Flamengo","Botafogo","Atletico-MG","Gremio","Bragantino","Fluminense","Athletico-PR","Cuiaba","Sao Paulo","Internacional","Fortaleza","Cruzeiro","Corinthians","Santos","Vasco","Bahia","Goias","Coritiba","America-MG"};
    pontos[20]={63,63,62,60,59,59,53,52,48,47,46,45,44,44,43,42,41,35,29,21};
}

void mostraTabela(char time, int *pontos){
	int i;
	printf("\nTabela Brasileirao Serie A\n");
	for(i=0;i<=19;i++){
		printf("\n%i. %s | P: %i\n",i+1,time[i],pontos[i]);
    }
}

void acharMaiores(int *pontos,char time){
	int maior=0,i;
    for(i=0;i<=19;i++){
    	if(pontos[i]>pontos[maior]){
    		pontos[maior]=pontos[i];
		}
    }
    printf("\nOs primeiros colocados:\n");
    printf("Pontos: %i | Time: %s\n",pontos[maior],time[maior]);
}

int main(){
	char time;
	int pontos;
	
	preencheTabela(time,&pontos);
	mostraTabela(time,&pontos);
	acharMaiores(&pontos,time);
}
