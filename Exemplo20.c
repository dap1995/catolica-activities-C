// 20.	Fa�a um programa que leia um n�mero, passe este n�mero como 
// par�metro para uma fun��o que retorne 0 se o n�mero for par ou 1 
// se o n�mero for �mpar.
// R.:

#include <stdio.h>

int funcaoTeste (int x);

int main (void){

	int numero,retorno;

	printf("Digite um numero:\n");
	scanf("%i",&numero);
	fflush(stdin);
	
	retorno=funcaoTeste(numero);
	return (retorno);
} 

int funcaoTeste (int x){
	int sobra = x%2;
    
	if (sobra == 0){
    	printf("par");
		return 0;
	} else {
    	printf("impar");
		return 1;		
	}
}


