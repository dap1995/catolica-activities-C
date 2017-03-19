#include <stdio.h>
int main(void) {
	int number1, number2;
	float realNumber, letterA, letterB, letterC;
	printf("Digite 2 numeros inteiros e um real: ");
	scanf("%i%*c%i%*c%f", &number1, &number2, &realNumber);
	fflush(stdin);
	letterA = (number1 * 2) * (number2 / 2);
	printf(" Letra A - Result: %.2f \n", letterA);
	letterB = (3 * number1) + realNumber;
	printf(" Letra B - Result: %.2f \n", letterB);
	letterC = (realNumber * realNumber * realNumber);
	printf(" Letra C - Result: %.2f \n", letterC);

    return 0;
}
