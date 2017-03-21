#include <stdio.h>

void getInterval(int number1, int number2){
  for (number1;number1<=number2;number1++)
    printf("\n %i", number1);
}

int isBigger(int number1, int number2){
  return (number1 > number2) ? 1 : 0;
}

int main(void) {
  int number1,
      number2;

  printf("Digite o primeiro numero: \n");
  scanf("%i", &number1);
  fflush(stdin);

  printf("Digite o ultimo numero: \n");
  scanf("%i", &number2);
  fflush(stdin);

  (isBigger(number2, number1))
  ? getInterval(number1, number2)
  : getInterval(number2, number1);

  return 0;
}
