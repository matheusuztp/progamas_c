#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int p1, p2;
    printf("Determine o n�mero de pe�as produzidas: ");
    scanf("%i",&p1);
    printf("\nDetermine o n�mero de pe�as defeituosas: ");
    scanf("%i",&p2);

        if (p2 > p1)
            printf("\nErro\n1");

            else if (p2 >= (p1/10))
                printf("\nMaquina precisa de manuten��o!");

                else
                    printf("\nMaquina em bom estado!");
return 0;
}
