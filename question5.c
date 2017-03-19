#include <stdio.h>
int main(void) {
    float altura, largura, metroQuadradoParede, totalLitrosTinta, qntyLatas;
    int consumoMetroQuadrado = 3;
    float totalLata = 3.6;
    printf("Digite a altura total da parede: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Digite a largura total da parede: ");
    scanf("%f", &largura);
    fflush(stdin);

    metroQuadradoParede = altura * largura;
    totalLitrosTinta = metroQuadradoParede * consumoMetroQuadrado;
    qntyLatas = totalLitrosTinta / totalLata;
    printf("A quantidade de latas para pintar a parede é de: %.2f \n", qntyLatas);

    return 0;
}
