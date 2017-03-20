#include <stdio.h>

void calculate(int oper, float num1, float num2){
	printf("Resultado: \n");
	switch(oper) {
          case 1:
            printf("%.2f \n", num1 + num2);
            break;
          case 2:
            printf("%.2f \n", num1 - num2);
            break;
          case 3:
            printf("%.2f \n", num1 * num2);
            break;
          case 4:
            if(num2 != 0)
                printf("%.2f\n\n", num1 / num2);
            else
                printf("Nao existe divisao por 0\n\n");
                break;
          case 5:
            printf("%d\n\n", (int)num1 % (int)num2);
            break;
          default:
                  printf("Fim!\n ");
        }
}

int main(void) {
        float num1, num2;
        int oper;

        do
        {
            printf("\t\tCalculadora\n\n");

            printf("Operacoes disponiveis\n");
            printf("[1] : soma\n");
            printf("[2] : subtracao\n");
            printf("[3] : multiplicao\n");
            printf("[4] : divisao\n");
            printf("[5] : resto da divisao\n");

            printf("Escolha a operação: \n");
            scanf("%i",&oper);
            printf("Escolha o primeiro numero: \n");
            scanf("%f", &num1);
            printf("Escolha o segundo numero: \n");
            scanf("%f", &num2);

            printf("Para sair digite: 6 \n");

            calculate(oper,num1,num2);

        } while(num1 != 0 && oper != '0' && num2 != 0);

    return 0;
}
