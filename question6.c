#include <stdio.h>

void defineSexo(char sexo){
	switch(sexo){
          case 'M': 
            printf("Masculino \n");
	    break;
          case 'F': 
            printf("Feminino \n");
	    break;
          default: 
            printf("Sexo Inválido! \n");
	}	
}

int main(void) {
	char sexo;
	printf("Digite a letra que representa seu sexo(M ou F):");
	scanf("%c", &sexo);
	defineSexo(sexo);

    return 0;
}
