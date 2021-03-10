#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b;
        const char ESC = 27;

    do {
        printf ("Informe o salário bruto do funcionário: ");
        scanf ("%f",&a);

    if ((a <= 350.00) && (a > 0)){
        b = a + 100.00;
            printf("\nNovo salário: R$ %2.2f",b); }

            else if ((a < 600.00) && (a > 350.00)){
                b = a + 75.00;
                    printf("\nNovo salário: R$ %2.2f",b); }

            else if ((a >= 600.00) && (a <= 900.00)){
                b = a + 50.00;
                    printf("\nNovo salário: R$ %2.2f",b); }

            else if (a > 900.00) {
                b = a + 35.00;
                    printf("\nNovo salário: R$ %2.2f",b); }

            else if (a <= 0)
                        printf("\nVALOR INVÁLIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recomeçar.\n");
    printf("\n");
    } while (getch () != ESC);
return 0;
}
