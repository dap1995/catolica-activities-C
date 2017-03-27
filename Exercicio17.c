#include <stdio.h>

int main (void){
	float sequencia[5],multiplicacao = 1;	
	int j,i,soma;
	
	for (i;i<5;i++){
		printf("Digite o %io numero:\n",(i+1));
		scanf("%f",&sequencia[i]);
		fflush(stdin);
	}

	soma = sequencia[1];
	multiplicacao = sequencia[1];
	for (j;j<5;j++){
		soma = sequencia[j] + soma;
		multiplicacao = sequencia[j] * multiplicacao;
	}

	printf("\n A soma: %i",soma);
	printf("\n A mltiplicacao e: %.2f",multiplicacao);
	
	getch();
}
