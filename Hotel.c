#include <stdio.h>
#include <stdlib.h>

// Diaria do hotel Dia 1 = D reais (31 * D)
// Diaria aumenta A reais por dia = D + A
// A partir do dia 16 a diaria nao aumenta mais lim D + 16 * A
// Dia 1 = 31 * D
// Dia 2 = 30 * (D + A)
// Dia 3 = 29 * (D + 2 * A)
// Dia 4 = 28 * (D + 3 * A)
// Dia 5 = 27 * (D + 4 * A)
// Dia 6 = 26 * (D + 5 * A)
// ---  Dia N = (31 - (N - 1)) * (D + (N - 1) * A)  --- 


int main(){
	int Diaria,AumentoDaDiaria,DiaDeChegada,Valor;
	
	printf("\n Insira o dia da diaria : ");
	scanf("%d",&Diaria);
	printf("\n Insira o Aumento da Diaria : ");
	scanf("%d",&AumentoDaDiaria);
	printf("\n Insira o dia de Chegada : ");
	scanf("%d",&DiaDeChegada);

	for (int n = 1; n <= 31; n++){
		if (n == DiaDeChegada && n == 1) {
			printf("\n Dia %d, O total e de %d",n,(31 * Diaria));
			break;
		}
		else if(n == DiaDeChegada && n == 2){ 
			printf("\n Dia %d, O total e de %d",n,(30*(Diaria+AumentoDaDiaria)));
			break;
		}
		if (n == DiaDeChegada && n <= 16){
			Valor = (31 - (n - 1)) * (Diaria + (n - 1) * AumentoDaDiaria);
			printf("\n Dia %d, O total e de %d",n,Valor);
			break;
		}
		else if (n == DiaDeChegada && n > 16){
			Valor = (31 - (n - 1)) * Diaria;
			printf("\n Dia %d, O total e de %d",n,Valor);
			break;
		}
	}
	return 0;
}
