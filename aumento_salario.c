#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, valor;
        const char ESC = 27;

    do {
        printf ("Informe o sal�rio atual do funcion�rio: ");
        scanf ("%f",&a);

    if ((a <= 300.00) && (a > 0)){
        b = a * 15.00 / 100.00;
        printf("\nO valor do aumento foi de: R$ %2.2f",b);
            valor = a + b;
                printf("\nNovo sal�rio: R$ %2.2f",valor); }

            else if ((a < 600.00) && (a > 300.00)){
                b = a * 10.00 / 100.00;
                printf("\nO valor do aumento foi de: R$ %2.2f",b);
                    valor = a + b;
                        printf("\nNovo sal�rio: R$ %2.2f",valor); }

            else if ((a >= 600.00) && (a <= 900.00)){
                b = a * 15.00 / 100.00;
                printf("\nOvalor do aumento foi de: R$ %2.2f",b);
                    valor = a + b;
                        printf("\nNovo sal�rio: R$ %2.2f",valor); }
            else if (a > 900.00)
                printf("\nN�o houve aumento!!");

            else if (a <= 0)
                        printf("\nVALOR INV�LIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    printf("\n");
    } while (getch () != ESC);
return 0;
}
