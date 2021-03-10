#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float valor1, valor2;
    printf("\nInforme o valor 1 e 2, respectivamente (1, 2) ");
    scanf("%f%*c%f",&valor1,&valor2);
        if (valor1 + valor2 > 100.25)
            printf("\nA soma dos valores digitados é maior que 100.25.");
            else
                printf("\nA soma dos valores digitados não é maior que 100.25.");

    return 0;
}
