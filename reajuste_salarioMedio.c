#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, valor;
        const char ESC = 27;

    do {
        printf ("Informe o saldo m�dio do cliente no �ltimo ano: ");
        scanf ("%f",&a);

    if ((a <= 200.00) && (a > 0)){
        b = a * 10.00 / 100.00;
        printf("\nVoc� recebeu um cr�dito de R$ %2.2f",b);
            valor = a + b;
                printf("\nSeu saldo m�dio reajustado � de R$ %2.2f",valor); }

            else if ((a > 200) && (a <= 300)){
                b = a * 20.00 / 100.00;
                printf("\nVoc� recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu saldo m�dio reajustado � de R$ %2.2f",valor); }

            else if ((a > 300.00) && (a <= 400.00)){
                b = a * 25.00 / 100.00;
                printf("\nVoc� recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu saldo m�dio rajustado � de R$ %2.2f",valor); }

            else if (a > 400.00) {
                b = a * 30.00 / 100.00;
                printf("\nVoc� recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu saldo m�dio reajustado � de R$ %2.2f",valor); }

            else if (a <= 0)
                        printf("\nVALOR INV�LIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    } while (getch () != ESC);
return 0;
}
