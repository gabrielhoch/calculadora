#include <stdio.h>

int main(void) {
    double num1, num2, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    if (scanf("%lf", &num1) != 1) return 1;

    printf("Digite o operador (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) return 1;

    printf("Digite o segundo numero: ");
    if (scanf("%lf", &num2) != 1) return 1;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisao por zero.\n");
                return 1;
            }
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Operador invalido.\n");
            return 1;
    }

    return 0;
}






















