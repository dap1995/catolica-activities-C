// 22.	Fazer um programa que possibilite várias opções de cálculos a 
// partir de um menu. O programa chamará a função correspondente a cada cálculo.
// [ a ]  S = 1/1 + 3/2 + 5/3+........+ 99/50
// [ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
// [ c ] S = 1000/1 - 997/2 + 994/3.........
// [ d ] S = 480/10 - 475/11 + 470/12 - .......
// [ f  ] FIM
// Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
// R.:


#include <stdio.h>

int funcaoA (void);
int funcaoB (void);
int funcaoC (void);
int funcaoD (void);

int main (void){

	char opcao;

	while (opcao != 'f'){
		
		printf("\n \n Digite uma opcao de a ate d, ou f para sair:\n");
		scanf("%c",&opcao);
		fflush(stdin);

		float saida;	
				
		switch (opcao){
			case 'a':
				saida=funcaoA();
				printf("\n %.2f",saida);
			break;
			
			case 'b':
				saida=funcaoB();
				printf("\n %.2f",saida);			
			break;
			
			case 'c':
				saida=funcaoC();
				printf("\n %.2f",saida);
			break;
			
			case 'd':
				saida=funcaoD();
				printf("\n %.2f",saida);
			break;	
			
		}
	}	
	
	printf("goodbye!");
	
	return 0;
} 

int funcaoA (void){
	int i = 1;
	float saida;
	
	for(i;i<=50;i++){
		saida += ((2*i-1)/i);
	}
	return saida;
}

int funcaoB (void){
	int i = 1;
	float saida;
	
	for(i;i<=10;i++){
		if(i%2 != 0){
			saida += (i/i);		
		} else {
			saida -= (i/i);				
		}
	}
	return saida;
}

int funcaoC (void){
	int i = 1;
	int j = 1000;
	float saida;
	
	for(i;i<=20;i++){
		if(i%2 != 0){
			saida += (j/i);	
		} else {
			saida -= (j/i);				
		}
		j--;	
	}
	return saida;
}

int funcaoD (void){
	int i = 10;
	int j = 480;
	float saida;
	
	for(i;i<=30;i++){
		if(i%2 != 0){
			saida += (j/i);	
		} else {
			saida -= (j/i);				
		}
		j-=5;	
	}
	return saida;
}


