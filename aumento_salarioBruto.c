#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b;
        const char ESC = 27;

    do {
        printf ("Informe o sal�rio bruto do funcion�rio: ");
        scanf ("%f",&a);

    if ((a <= 350.00) && (a > 0)){
        b = a + 100.00;
            printf("\nNovo sal�rio: R$ %2.2f",b); }

            else if ((a < 600.00) && (a > 350.00)){
                b = a + 75.00;
                    printf("\nNovo sal�rio: R$ %2.2f",b); }

            else if ((a >= 600.00) && (a <= 900.00)){
                b = a + 50.00;
                    printf("\nNovo sal�rio: R$ %2.2f",b); }

            else if (a > 900.00) {
                b = a + 35.00;
                    printf("\nNovo sal�rio: R$ %2.2f",b); }

            else if (a <= 0)
                        printf("\nVALOR INV�LIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    printf("\n");
    } while (getch () != ESC);
return 0;
}
