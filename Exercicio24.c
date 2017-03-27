#include <stdio.h>
#include <conio.h>

int ValidaLados(float a, float b, float c);

int main() {
	float a, b, c;
	int resposta;
	printf("\nInforme o primeiro lado: ");
	scanf("%f", &a);
	printf("\nInforme o segundo lado: ");
	scanf("%f", &b);
	printf("\nInforme o terceiro lado: ");
	scanf("%f", &c);
	
	resposta = ValidaLados(a,b,c);
	if (resposta=0){
		printf("Equilatero");
	} else if (resposta=1){
		printf("Isosceles");
	} else if (resposta=2){
		printf("Escaleno");	
	} else {
		printf("Nao é um triangulo");	
	}
	
	getch();
}
int ValidaLados(float a, float b, float c){
	if(a<b+c && b<a+c && c<a+b ) {
		printf("\nTriangulo: ");
		if( a==b && b==c ) {
			return 0;
		} else if( a==b || a==c || b==c ) {
			return 1;
		} else {
			return 2;
		}
	} else {
		return 3;
	}
}
