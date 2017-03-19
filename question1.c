#include <stdio.h>
int main(void) {
	float temp, c;
	
	printf("Qual a temperatura em Farenheit(ºF): ");
	scanf("%f", &temp);
	fflush(stdin);
	c=(5 * (temp - 32)/9);
	printf("o valor em graus celsius(ºC) é: %.2f", c);


    return 0;
}
