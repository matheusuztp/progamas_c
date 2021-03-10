#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("\nDigite um número ");
    scanf("%i",&numero);
        if (numero < 0)
            printf("\nO número digitado %i é menor que 0\n",numero);
                else
                {
                    printf("\nO número digitado %i é maior ou igual a 0\n",numero);
                }
return 0;
}
