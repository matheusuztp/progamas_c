#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, valor;
        const char ESC = 27;

    do {
        printf ("Informe o sal�rio do funcion�rio: ");
        scanf ("%f",&a);

    if ((a < 300.00) && (a > 0)){
        b = a * 35.00 / 100.00;
        printf("\nVoc� recebeu um aumento de R$ %2.2f",b);
            valor = a + b;
                printf("\nSeu sal�rio reajustado � de R$ %2.2f",valor); }

            else if (a >= 300.00){
                b = a * 15.00 / 100.00;
                printf("\nVoc� recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu sal�rio reajustado � de R$ %2.2f",valor); }

                    else if (a <= 0)
                        printf("\nVALOR INV�LIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    } while (getch () != ESC);
return 0;
}
