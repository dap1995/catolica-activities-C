#include <stdio.h>
int main(void) {
    // Motors of a machine
    char * value[3];
    int quantity[3], price[3];

    // It is declared to calculate the value
    int qntySellMachine, qntyTotal0, qntyTotal1, qntyTotal2;
    float totalValue0, totalValue1, totalValue2, total;
    
    /* Defined the default values
      20cv = 0 || 1CV = 1 || 5CV = 2 
    */
    value[0] = "20CV";
    value[1] = "1CV";
    value[2] = "5CV";
    quantity[0] = 1;
    quantity[1] = 2;
    quantity[2] = 3;
    price[0] = 1500;
    price[1] = 300;
    price[2] = 600;

    printf("Digite a quantidade de máquinas que serão vendidas:");
    scanf("%i",&qntySellMachine);
    qntyTotal0 = qntySellMachine * quantity[0];
    qntyTotal1 = qntySellMachine * quantity[1];
    qntyTotal2 = qntySellMachine * quantity[2];

    totalValue0 = qntyTotal0 * price[0];
    totalValue1 = qntyTotal1 * price[1];
    totalValue2 = qntyTotal2 * price[2];
    total = totalValue0 + totalValue1 + totalValue2;

    printf("Os valores totais para cada motor: \n");
    printf("%s CV: Valor Unit. %i, Quantidade %i, Total: %.2f \n",value[0], price[0], qntyTotal0, totalValue0);
    printf("%s CV: Valor Unit. %i, Quantidade %i, Total: %.2f \n",value[1], price[1], qntyTotal1, totalValue1);
    printf("%s CV: Valor Unit. %i, Quantidade %i, Total: %.2f \n",value[2], price[2], qntyTotal2, totalValue2);
    printf("Total: %.2f \n", total);

    return 0;
}
