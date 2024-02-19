/*
Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = M_PI * pow(raio, 2);
    
    printf("A area eh %.2f\n", area);

    return 0;
}
