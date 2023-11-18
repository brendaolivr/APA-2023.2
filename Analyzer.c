#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qtd_void=0,qtd_int=0,qtd_float=0,qtd_double=0,qtd_char=0,qtd_if=0,
    qtd_else=0,qtd_case=0,qtd_printf=0,qtd_scanf=0,qtd_funcao=0,qtd_for=0,
    qtd_while=0,qtd_do=0,soma=0;
    char linha[1000];
    FILE *arq;
    arq = fopen("complexidade.c","r");
    if(arq==NULL){
        printf("\nNao foi possivel abrir o arquivo\n");
        exit(1);
    }else{
    	while(fgets(linha,1000,arq)!= NULL){
          printf("%s",linha);
          if(strstr(linha,"void")!=NULL){
            qtd_void++;
          }else if(strstr(linha,"int ")!=NULL){
            qtd_int++;
          }else if(strstr(linha,"float")!=NULL){
            qtd_float++;
          }else if(strstr(linha,"double")!=NULL){
            qtd_double++;
          } else if(strstr(linha,"char") != NULL){
        	qtd_char++;
		  }else if(strstr(linha,"if") != NULL){
			qtd_if++;
		  }else if(strstr(linha,"else") != NULL){
			qtd_else++;
		  }else if(strstr(linha,"case") != NULL){
			qtd_case++;
		  }else if(strstr(linha,"printf") != NULL){
			qtd_printf++;
		  }else if(strstr(linha,"scanf") != NULL){
			qtd_scanf++;
		  }else if(strstr(linha,"return") != NULL){
			qtd_funcao++;
		  } else if (strstr(linha, "for") != NULL) {
            qtd_for++;
          } else if (strstr(linha, "while") != NULL) {
            qtd_while++;
          } else if (strstr(linha, "do") != NULL) {
            qtd_do++;
          }
       }
	}
    soma = qtd_void + qtd_int + qtd_float + qtd_double + qtd_char + qtd_if + qtd_else + qtd_case + qtd_printf + qtd_scanf + qtd_funcao + qtd_for + qtd_while + qtd_do;
    
	printf("\nQuantidade total de passos: %i\n",soma);
    fclose(arq);
}
