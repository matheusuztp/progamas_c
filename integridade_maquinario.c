#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int p1, p2;
    printf("Determine o número de peças produzidas: ");
    scanf("%i",&p1);
    printf("\nDetermine o número de peças defeituosas: ");
    scanf("%i",&p2);

        if (p2 > p1)
            printf("\nErro\n1");

            else if (p2 >= (p1/10))
                printf("\nMaquina precisa de manutenção!");

                else
                    printf("\nMaquina em bom estado!");
return 0;
}
