#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float a, b, valor;
    const char ESC = 27;

    do{
        printf("\nInforme o salário do funcionário: ");
        scanf("%f",&a);

    if ((a <= 300.00) && (a > 0)) {
        b = a * 50.00 / 100.00;
        valor = a + b;
            printf("\nNovo salário: R$ %2.2f",valor);
    }
        else if ((a > 300.00) && (a <= 500.00)){
            b = a * 40.00 / 100.00;
            valor = a + b;
                printf("\nNovo salário: R$ %2.2f",valor);
        }
        else if ((a > 500.00) && (a <= 700.00)) {
            b = a * 30.00 / 100.00;
            valor = a + b;
                printf("\nNovo salário: R$ %2.2f",valor);
        }
        else if ((a > 700.00) && (a <= 800.00)){
            b = a * 20.00 / 100.00;
            valor = a + b;
                printf("\nNovo salário: R$ %2.2f",valor);
        }
        else if ((a > 800.00) && (a <= 1000.00)) {
            b = a * 10.00 / 100.00;
            valor = a + b;
            printf("\nNovo salário: R$ %2.2f",valor);
        }
        else if (a > 1000.00){
            b = a * 5.00 / 100.00;
            valor = a + b;
            printf("\nNovo salário: R$ %2.2f",valor);
        }
                else if  (a <= 0)
                    printf("\nVALOR INVÁLIDO!!!\n");

    printf("\nPrecione ESC para terminar ou ENTER para recomeçar");
    printf("\n");

    } while (getch () != ESC);
return 0;
}
