#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float a, p;
    char sexo;
    const char ESC = 27;

do{
    printf("\nInforme a sua altura: ");
    scanf("%f",&a);

    if (a <= 0)
        printf("\n\nAltura Inválida!");

    else if (a > 2.50)
        printf("\n\nAltura Inválida!");

        else {
            printf("\nInforme seu sexo: ");
            scanf("%s",&sexo);

            switch (sexo)
            {
            case 'M':
                p = (72.7 * a) - 58;
                printf("\n\nPeso Ideal: %2.2f Kg.",p);
                break;
            case 'm':
                p = (72.7 * a) - 58;
                printf("\n\nPeso Ideal: %2.2f Kg.",p);
                break;
            case 'F':
                p = (62.1 * a) - 44.7;
                printf("\n\nPeso Ideal: %2.2f Kg.",p);
                break;
            case 'f':
                p = (62.1 * a) - 44.7;
                printf("\n\nPeso Ideal: %2.2f Kg.",p);
                break;
            default:
                printf("\n\nSexo inválido! Tente novamente. (ENTER)");
            }
        }

printf("\n\nPrecione ESC para terminar.");
printf("\n");
} while(getch() != ESC);
return 0;
}
