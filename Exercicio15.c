#include <stdio.h>

int main (void){
	int numTurmas,i,numeroAlunos,soma;
	float media;	
	
	printf("Digite o numero de turmas:\n");
	scanf("%i",&numTurmas);
	fflush(stdin);
	
	for (i;i<numTurmas;i++){
		printf("Digite numero de alunos na turma %i:\n",(i+1));
		scanf("%i",&numeroAlunos);
		fflush(stdin);
		soma+=numeroAlunos;	
	}

	media=(soma/numeroAlunos);
	printf("\n A média de alunos e: %.2f",media);

	getch();
}
