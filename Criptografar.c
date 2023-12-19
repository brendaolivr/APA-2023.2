#include <stdio.h>
#include <string.h>

void criptografar(char c[]){
  char *chave = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  char N0[5]="48",N1[5]="49",N2[5]="50",N3[5]="51",N4[5]="52",N5[5]="53",N6[5]="54",N7[5]="55",N8[5]="56",N9[5]="57",
  A[5]="65",B[5]="66",C[5]="67",D[5]="68",E[5]="69",F[5]="70",G[5]="71",H[5]="72",I[5]="73",J[5]="74",K[5]="75",L[5]="76",
  M[5]="77",N[5]="78",O[5]="79",P[5]="80",Q[5]="81",R[5]="82",S[5]="83",T[5]="84",U[5]="85",V[5]="86",W[5]="87",X[5]="88",Y[5]="89",Z[5]="90";
  char codigo[64] = "";
  int i;
  for (i=0; i<strlen(c); i++){
    if(strchr(chave, toupper(c[i])) == NULL){
    	strncat(codigo, &c[i], 1);
        }else{
        	switch (toupper(c[i])){
        		case '0':
        			strcat(codigo,N0);
        		break;
        		case '1':
        			strcat(codigo,N1);
        		break;
        		case '2':
        			strcat(codigo,N2);
        		break;
        		case '3':
        			strcat(codigo,N3);
        		break;
        		case '4':
        			strcat(codigo,N4);
        		break;
        		case '5':
        			strcat(codigo,N5);
        		break;
        		case '6':
        			strcat(codigo,N6);
        		break;
        		case '7':
        			strcat(codigo,N7);
        		break;
        		case '8':
        			strcat(codigo,N8);
        		break;
        		case '9':
        			strcat(codigo,N9);
        		break;
        		case 'A':
        			strcat(codigo, A);
                break;
                case 'B':
                	strcat(codigo, B);
                break;
                case 'C':
                	strcat(codigo, C);
                break;
                case 'D':
                	strcat(codigo, D);
                break;
                case 'E':
                	strcat(codigo, E);
                break;
                case 'F':
                	strcat(codigo, F);
                break;
                case 'G':
                    strcat(codigo, G);
                break;
                case 'H':
                    strcat(codigo, H);
                break;
                case 'I':
                    strcat(codigo, I);
                break;
                case 'J':
                    strcat(codigo, J);
                break;
                case 'K':
                    strcat(codigo, K);
                break;
                case 'L':
                    strcat(codigo, L);
                break;
                case 'M':
                    strcat(codigo, M);
                break;
                case 'N':
                    strcat(codigo, N);
                break;
                case 'O':
                    strcat(codigo, O);
                break;
                case 'P':
                	strcat(codigo, P);
                break;
                case 'Q':
                	strcat(codigo, Q);
                break;
                case 'R':
                	strcat(codigo, R);
                break;
                case 'S':
                	strcat(codigo, S);
                break;
                case 'T':
                	strcat(codigo, T);
                break;
                case 'U':
                	strcat(codigo, U);
                break;
                case 'V':
                	strcat(codigo, V);
			    break;
			    case 'W':
			    	strcat(codigo, W);
				break;
				case 'X':
					strcat(codigo, X);
				break;
				case 'Y':
					strcat(codigo, Y);
				break;
				case 'Z':
					strcat(codigo, Z);
				break;
			}
		}
	}
  printf("Codigo criptografado:%s\n", codigo);
}
int main(){
    char cod[32];
    printf("\nDigite um codigo: ");
    scanf("%s", cod);
    criptografar(cod);
}
