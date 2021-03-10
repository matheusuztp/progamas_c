#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, c, valor;
        const char ESC = 27;

    do {
        printf ("Informe o custo de fabrica do carro: ");
        scanf ("%f",&a);

    if ((a <= 12000.00) && (a > 0)){
        b = a * 5.00 / 100.00;
            valor = a + b;
                printf("\nPreço ao consumidor: R$ %2.2f",valor); }

            else if ((a <= 25000.00) && (a > 12000.00)){
                b = a * 10.00 / 100.00;
                c = a * 15.00 / 100.00;
                    valor = a + b + c;
                        printf("\nPreço ao consumidor: R$ %2.2f",valor); }

            else if (a > 25000.00){
                b = a * 15.00 / 100.00;
                c = a * 20.00 / 100.00;
                    valor = a + b;
                        printf("\nPreço ao consumidor: R$ %2.2f",valor); }

            else if (a <= 0)
                        printf("\nVALOR INVÁLIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recomeçar.\n");
    printf("\n");
    } while (getch () != ESC);
return 0;
}
