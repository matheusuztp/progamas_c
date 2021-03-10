#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    printf("\nInforme o primeiro numero: ");
    scanf("%i",&n1);

    printf("\nInforme o valor do segundo numero; ");
    scanf("%i",&n2);

        if (n2 == 0)
            printf("\nNão é possível realizar a divisão de um número por 0.");
                else
                    printf("resultado da divisão inteira é: %i", n1 / n2);
return 0;
}
