// 20.	Faça um programa que leia um número, passe este número como 
// parâmetro para uma função que retorne 0 se o número for par ou 1 
// se o número for ímpar.
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


