/*
Faça um Programa que converta metros para centímetros.
*/
#include <stdio.h>

int main()
{
    float metros, centimetros;
    
    printf("Digite a medida em metros: ");
    scanf("%f", &metros);
    
    centimetros = metros * 100;
    
    printf("%.2fm correspondem a %.2fcm\n", metros, centimetros);

    return 0;
}
