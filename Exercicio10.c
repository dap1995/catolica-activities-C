// 10.	Faça um programa que leia um número e exiba o dia correspondente da 
// semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer 
// valor inválido.
// R.:

#include <stdio.h>

int main (void){
	int opcao;
	printf("Digite sua opcao de 1 a 7:\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch (opcao){
		case 1:
			printf("Domingo!");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terca");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabado");
			break;
		
		default:
			printf("\nOPCAO INVALIDA\n");
	}
	getch();
}
