#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("\nDigite um n�mero ");
    scanf("%i",&numero);
        if (numero < 0)
            printf("\nO n�mero digitado %i � menor que 0\n",numero);
                else
                {
                    printf("\nO n�mero digitado %i � maior ou igual a 0\n",numero);
                }
return 0;
}
