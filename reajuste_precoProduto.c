#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, valor;
        const char ESC = 27;

    do {
        printf ("Informe o pre�o do produto: ");
        scanf ("%f",&a);

    if ((a <= 50.00) && (a > 0)){
        b = a * 5.00 / 100.00;
        valor =  a + b;
        printf("\nNovo pre�o: R$ %2.2f",valor);
    }
      else if ((a < 50.00) && (a >= 100.00)){
        b = a * 10.00 / 100.00;
                valor = a + b;
                printf("\nNovo pre�o: R$ %2.2f",valor);
       }

            else if (a > 100.00) {
                b = a * 15.00 / 100.00;
                valor = a + b;
                    printf("\nNovo pre�o: R$ %2.2f",valor);
        }

            else if (a <= 0)
                printf("\nVALOR INV�LIDO!");

     if (valor <= 80.00)
        printf("\nClassifica��o: Barato!");

        else if ((valor > 80.00) && (valor <= 120.00))
                printf("\nClassifica��o: Normal!");

        else if ((valor > 120.00) && (valor <= 200.00))
                printf("\nClassifica��o: Caro!");

        else if (valor > 200.00)
                printf("\nClassifica��o: Muito Caro!!");



    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    printf("\n");
    } while (getch () != ESC);
return 0;
}
