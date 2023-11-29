#include <stdio.h>
#include <stdlib.h>

void preencheTabela(char time[][40], int pontos[]){
    int pontosReais[] = {63,63,62,60,59,59,53,52,48,47,46,45,44,44,43,42,41,35,29,21},i;
    char times[20][40] = {"Palmeiras","Flamengo","Botafogo","Atletico-MG","Gremio","Bragantino","Fluminense","Athletico-PR","Cuiaba","Sao Paulo","Internacional","Fortaleza","Cruzeiro","Corinthians","Santos","Vasco","Bahia","Goias","Coritiba","America-MG"};
    for (i=0;i<20;i++){
        strcpy(time[i], times[i]);
        pontos[i] = pontosReais[i];
    }
}

void mostraTabela(char time[][40], int pontos[]){
	int i;
    printf("\nTabela Brasileirao Serie A\n");
    for(i = 0; i <= 19; i++){
        printf("\n%i. %s | P: %i\n", i+1, time[i], pontos[i]);
    }
}

void acharMaiores(int pontos[], char time[][40]){
	int i;
    printf("\nOs 5 primeiros colocados:\n");
    for(i = 0; i < 5; i++){
        printf("Pontos: %i | Time: %s\n", pontos[i], time[i]);
    }
}

void difPontos(int pontos[]){
	int d[4],i;
	for(i=0;i<5;i++){
		d[i] = pontos[i]-pontos[i+1];
	}
	for(i=0;i<4;i++){
		printf("\nDiferenca de pontos entre a posicao %i e a posicao %i eh de %i\n",i+1,i+2,d[i]);
	}
}

void acharMenores(int pontos[], char time[][40]){
	int i;
    printf("\nOs 5 ultimos colocados:\n");
    for(i=15; i<=19; i++){
        printf("Pontos: %i | Time: %s\n", pontos[i], time[i]);
    }
}

void difPontos2(int pontos[]){
	int d[4],i;
	for(i=15;i<=19;i++){
		d[i] = pontos[i]-pontos[i+1];
	}
	for(i=15;i<=18;i++){
		printf("\nDiferenca de pontos entre a posicao %i e a posicao %i eh de %i\n",i+1,i+2,d[i]);
	}
}

void mostraMetade(char time[][40], int pontos[]){
	int i;
	printf("\nMetade da Tabela Brasileirao Serie A\n");
    for(i = 0; i <= 9; i++){
        printf("\n%i. %s | P: %i\n", i+1, time[i], pontos[i]);
    }
}

int main(){
    char time[20][40];
    int pontos[20];
    preencheTabela(time, pontos);
    mostraTabela(time, pontos);
    acharMaiores(pontos, time);
    difPontos(pontos);
    acharMenores(pontos, time);
    difPontos2(pontos);
    mostraMetade(time, pontos);
}
