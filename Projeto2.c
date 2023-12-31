#include <stdio.h>
#include <stdlib.h>

void mostraTabela(char time[][40], int pontos[], int i, int i2){
    if(i<=i2){
    	printf("\n%i. %s | P: %i\n", i+1, time[i], pontos[i]);
    	mostraTabela(time, pontos,i+1,i2);
	}
}

void acharMaiores(int pontos[], char time[][40], int i, int i2){
	if(i<=i2){
		printf("Pontos: %i | Time: %s | Posicao: %i\n", pontos[i], time[i],i+1);
		acharMaiores(pontos,time,i+1,i2);
	}
}

void acharMenores(int pontos[], char time[][40], int i, int i2){
	if(i<=i2){
		printf("Pontos: %i | Time: %s | Posicao: %i\n", pontos[i], time[i],i+1);
		acharMaiores(pontos,time,i+1,i2);
	}
}

void mostraMetade(char time[][40], int pontos[],int i, int i2){
	if(i<=i2){
		printf("\n%i. %s | P: %i\n", i+1, time[i], pontos[i]);
		mostraMetade(time,pontos,i+1,i2);
	}
}

void difPontos(int pontos[],int i, int i2){
	int d[4];
	if(i<=i2){
		d[i] = pontos[i]-pontos[i+1];
		printf("\nDiferenca de pontos entre a posicao %i e a posicao %i eh de %i\n",i+1,i+2,d[i]);
		difPontos(pontos,i+1,i2);
	}
}

void difPontos2(int pontos[],int i, int i2){
	int d[4];
	if(i<=i2){
		d[i] = pontos[i]-pontos[i+1];
		printf("\nDiferenca de pontos entre a posicao %i e a posicao %i eh de %i\n",i+1,i+2,d[i]);
		difPontos(pontos,i+1,i2);
	}
}

int main(){
    int pontos[20] = {63,63,62,60,59,59,53,52,48,47,46,45,44,44,43,42,41,35,29,21},i;
    char times[20][40] = {
	"Palmeiras",
	"Flamengo",
	"Botafogo",
	"Atletico-MG",
	"Gremio",
	"Bragantino",
	"Fluminense",
	"Athletico-PR",
	"Cuiaba",
	"Sao Paulo",
	"Internacional",
	"Fortaleza",
	"Cruzeiro",
	"Corinthians",
	"Santos",
	"Vasco",
	"Bahia",
	"Goias",
	"Coritiba",
	"America-MG"};
	printf("\nTabela Brasileirao Serie A\n");
	mostraTabela(times, pontos,0,19);
	printf("----------------------------------");
	printf("\nOs 5 primeiros colocados:\n");
	acharMaiores(pontos,times,0,4);
	difPontos(pontos,0,3);
	printf("----------------------------------");
	printf("\nOs 5 ultimos colocados:\n");
	acharMenores(pontos,times,14,19);
	difPontos2(pontos,14,18);
	printf("----------------------------------");
	printf("\nMetade da Tabela Brasileirao Serie A\n");
	mostraMetade(times,pontos,0,9);
}
