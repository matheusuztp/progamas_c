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

  b = a * 30.00 / 100.00;

    if ((a < 500.00) && (a > 0)){
        printf("\nVoc� recebeu um aumento de R$ %2.2f",b);
            valor = a + b;
                printf("\nSeu sal�rio reajustado � de R$ %2.2f",valor); }

            else if (a >= 500.00)
                printf("\nVoc� n�o t�m direito ao aumento!!");

                    else if (a <= 0)
                        printf("\nVALOR INV�LIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    } while (getch () != ESC);
return 0;
}
