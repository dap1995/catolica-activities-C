// 18.	Construa um algoritmo que leia duas matrizes 3x3 e gere uma 
// terceira matriz com a soma dos elementos correspondentes de a e b.
// R.:

#include <stdio.h>

int main (void){
	int matrizA[3][3], matrizB[3][3], matrizC[3][3];	
	int i=0,j=0;
	
	for (i;i<3;i++){
		for (j;j<3;j++){
			printf("Matriz A - Digite o valor da posicao %i, %i:\n",(i+1),(j+1));
			scanf("%i",&matrizA[i][j]);
			fflush(stdin);
		}
		j=0;
	}

	i=j=0;
	printf("\n");

	for (i;i<3;i++){
		for (j;j<3;j++){
			printf("Matriz B - Digite o valor da posicao %i, %i:\n",(i+1),(j+1));
			scanf("%i",&matrizB[i][j]);
			fflush(stdin);
		}
		j=0;
	}

	i=j=0;
	printf("\n");

	for (i;i<3;i++){
		for (j;j<3;j++){
			matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
		}
		j=0;
	}

	i=j=0;
	printf("\n");

	for (i;i<3;i++){
		for (j;j<3;j++){
			printf("%i ",matrizC[i][j]);
		}
		j=0;
		printf("\n");
	}


	getch();
}

