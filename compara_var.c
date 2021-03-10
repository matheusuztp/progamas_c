#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    printf("\nInforme o valor de a e de b, respectivamente ");
    scanf("%i%*c%i",&a,&b);
        if (a == b)
            printf("\nO valor da variável a é igual ao valor da variável b.");

            else
                printf("\nO valor da variável a não é igual ao valor da variável b.");

       return 0;
}
