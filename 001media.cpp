/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a nota do bimestre 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota do bimestre 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota do bimestre 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota do bimestre 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media eh %.2f\n", media);

    return 0;
}
