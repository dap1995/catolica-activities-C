// 12.	Fa�a um programa que pe�a dois n�meros inteiros e gere os 
// n�meros pares que est�o no intervalo entre eles.
// R.:

#include <stdio.h>

int main (void){
	int num1, num2,atual;
	printf("Digite o primeiro inteiro:\n");
	scanf("%i",&num1);
	fflush(stdin);
	printf("Digite o segundo inteiro:\n");
	scanf("%i",&num2);
	fflush(stdin);

	if(num1%2 == 0){
		atual = num1;
	} else {
		atual = num1+1;
	}

	while(atual <= num2){
		if(atual%2==0){
			printf("\n %i",atual);
		} 
		atual++;
	}

	getch();
}
