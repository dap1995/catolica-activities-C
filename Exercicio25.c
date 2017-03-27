#include <stdio.h>

// função valida data
int ValidaData(int d, int m, int a);

int main (void){
	int D,M,A;
	printf("Digite a data (DD/MM/AAAA):");
	scanf("%i%*c%i%*c%i",&D,&M,&A);
	printf("Data: %i/%i/%i\n",D,M,A);
	ValidaData(D,M,A); 
	getch();
	return 0;
}

int ValidaData(int d, int m, int a){
	int dia;
	if (a >= 0){
		if (m >= 1 && m <= 12) {
			if (d >= 1 && d <= 26){
				printf("Data: %i/%i/%i\n",d+5,m,a);
				return;
			}else{
				dia = (d+5) - 31;
				printf("Data: %i/%i/%i\n",dia,m+1,a);
				return;
            }
		}else{
			printf("Data invalida\n");
			return;
		}
	}else{
		printf("Data invalida\n");
		return;
	}
}

