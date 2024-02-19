#include <stdio.h>

int main() {
    float salarioHora, salarioMes, horasTrabalhadas;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &salarioHora);

    printf("Digite quantas horas voce trabalhou esse mes: ");
    scanf("%f", &horasTrabalhadas);

    salarioMes = salarioHora * horasTrabalhadas;

    printf("Seu salario total do mes eh de R$%.2f\n", salarioMes);

    return 0;
}
