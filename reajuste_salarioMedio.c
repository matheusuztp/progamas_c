#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, valor;
        const char ESC = 27;

    do {
        printf ("Informe o saldo médio do cliente no último ano: ");
        scanf ("%f",&a);

    if ((a <= 200.00) && (a > 0)){
        b = a * 10.00 / 100.00;
        printf("\nVocê recebeu um crédito de R$ %2.2f",b);
            valor = a + b;
                printf("\nSeu saldo médio reajustado é de R$ %2.2f",valor); }

            else if ((a > 200) && (a <= 300)){
                b = a * 20.00 / 100.00;
                printf("\nVocê recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu saldo médio reajustado é de R$ %2.2f",valor); }

            else if ((a > 300.00) && (a <= 400.00)){
                b = a * 25.00 / 100.00;
                printf("\nVocê recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu saldo médio rajustado é de R$ %2.2f",valor); }

            else if (a > 400.00) {
                b = a * 30.00 / 100.00;
                printf("\nVocê recebeu um aumento de R$ %2.2f",b);
                    valor = a + b;
                        printf("\nSeu saldo médio reajustado é de R$ %2.2f",valor); }

            else if (a <= 0)
                        printf("\nVALOR INVÁLIDO!");


    printf("\n\nPrecione ESC para terminar ou ENTER para recomeçar.\n");
    } while (getch () != ESC);
return 0;
}
