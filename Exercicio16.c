// 16.	Construa um algoritmo que leia um vetor de 10 números reais 
// e mostre-os na ordem inversa.
// R.:

#include <stdio.h>

int main (void){
	float sequencia[10];	
	int i;
	
	for (i;i<10;i++){
		printf("Digite o %io numero:\n",(i+1));
		scanf("%f",&sequencia[i]);
		fflush(stdin);
	}

	i-=1;
	
	for (i;i>=0;i--){
		printf("\n %.2f",sequencia[i]);
	}

	getch();
}

