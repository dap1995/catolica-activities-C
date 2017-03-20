#include <stdio.h>

int sortList(int n[3]){
  if (n[0] <= n[1] && n[1] <= n[2]) {
      printf("A ordem crescente: %d %d %d\n", n[0], n[1], n[2]);
  } else if (n[0] <= n[2] && n[2] <= n[1]) {
      printf("A ordem crescente: %d %d %d\n", n[0], n[2], n[1]);
  } else if (n[1] <= n[0] && n[0] <= n[2]) {
      printf("A ordem crescente: %d %d %d\n", n[1], n[0], n[2]);
  } else if (n[1] <= n[2] && n[2] <= n[0]) {
      printf("A ordem crescente: %d %d %d\n", n[1], n[2], n[0]);
  } else if (n[2] <= n[0] && n[0] <= n[1]) {
      printf("A ordem crescente: %d %d %d\n", n[2], n[0], n[1]);
  } else {
      printf("A ordem crescente: %d %d %d\n", n[2], n[1], n[0]);
  }
}

int main(void) {
    int numbers[3], i;
    for (i=0;i<3;i++){
	    printf("Digite o numero %i: ", i);
	    scanf("%i", &numbers[i]);
    }
    sortList(numbers);

    return 0;
}
