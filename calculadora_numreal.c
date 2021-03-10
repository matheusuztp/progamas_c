#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, me, dif, div, mult;
        int op;
        const char ESC = 27;

    do {
        printf ("Informe dois n�meros reais (separe entre espa�os): ");
        scanf ("%f%*c%f",&a,&b);
        printf ("\nInforme a opera��o: \n 1 - M�DIA; \n 2 - DIFEREN�A; \n 3 - PRODUTO; \n 4 - DIVIS�O; \n Opera��o: ");
        scanf ("%i",&op);

    switch (op)
    {
        case 1: me = (a + b) / 2.0;
            printf ("\nA M�dia �: %2.2f",me);
            break;

        case 2: dif = (a - b);
            printf ("\nA Diferen�a �: %2.2f",dif);
            break;

        case 3: mult = (a * b);
            printf ("\nO Produto �: %2.2f",mult);
            break;

        case 4: div = (a / b);
                if (b == 0)
                    printf ("\nERRO! (Divis�o por zero)\n");
                        else
                            printf ("\nA Divis�o �: %2.2f\n",div);
                break;
        default:
            printf("\n OPERA��O INV�LIDA!!");

    }
    printf("\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    } while (getch () != ESC);
return 0;
}
