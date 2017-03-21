// 14.	Faça um programa que calcule e mostre a média bimestral de um aluno. 
// O usuário deve informar a quantidade de notas, bem como cada nota.
// R.:

#include <stdio.h>

int main (void){
	int numNotas,i;
	float media,soma,notaDigitada;	
	
	printf("Digite o numero de notas:\n");
	scanf("%i",&numNotas);
	fflush(stdin);
	
	for (i;i<numNotas;i++){
		printf("Digite a nota numero %i:\n",(i+1));
		scanf("%f",&notaDigitada);
		fflush(stdin);
		soma+=notaDigitada;	
	}

	media=(soma/numNotas);
	printf("\n Sua media: %.2f",media);

	getch();
}
