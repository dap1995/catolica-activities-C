#include <stdio.h>

char * greet(char period){
  switch(period){
    case 'M':
      return "BOM DIA \n";
      break;
    case 'V':
      return "BOA TARDE \n";
      break;
    case 'N':
      return "BOA NOITE \n";
      break;
    default:
      return "INVALIDO \n";
  }
}

int main(void) {
  char period;
  printf("Digite o periodo do dia: ");
  scanf("%s", &period);
  printf(greet(period));
  return 0;
}
