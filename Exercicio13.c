#include <stdio.h>

int main (void){
	
	int numero,atual,menor,maior,cont;
	printf("Digite o primeiro inteiro:\n");
	scanf("%i",&numero);
	
	menor = numero;
	maior = numero;
	cont = 1;
	while(cont <= 9){
		printf("Digite outro numero inteiro:\n");
		scanf("%i",&numero);
		
		if (numero < menor) {
			menor = numero;
		}
		
		if (numero > maior) {
			maior = numero;
		}
		
		cont = cont + 1;
	}
	
	printf("\nNumero menor digitado: %i",menor);
	printf("Numero maior digitado: %i",maior);
	
	getch();
	
}
