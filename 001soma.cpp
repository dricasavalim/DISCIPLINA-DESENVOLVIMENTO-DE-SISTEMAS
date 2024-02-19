#include <stdio.h>

int main() {
    float num1, num2, soma;

    // Solicita o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    // Solicita o segundo número
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Calcula a soma
    soma = num1 + num2;

    // Imprime o resultado
    printf("A soma dos numeros %.2f e %.2f eh: %.2f\n", num1, num2, soma);

    return 0;
}
