#include <stdio.h>
int main(void) {
	float temp, c;
	
	printf("Qual a temperatura em celsius(ºC): ");
	scanf("%f", &temp);
	fflush(stdin);
	c=(9 * (temp + 32)/5);
	printf("o valor em graus Farenheit(ºF) é: %.2f", c);


    return 0;
}
