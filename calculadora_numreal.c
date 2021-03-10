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
        printf ("Informe dois números reais (separe entre espaços): ");
        scanf ("%f%*c%f",&a,&b);
        printf ("\nInforme a operação: \n 1 - MÉDIA; \n 2 - DIFERENÇA; \n 3 - PRODUTO; \n 4 - DIVISÃO; \n Operação: ");
        scanf ("%i",&op);

    switch (op)
    {
        case 1: me = (a + b) / 2.0;
            printf ("\nA Média é: %2.2f",me);
            break;

        case 2: dif = (a - b);
            printf ("\nA Diferença é: %2.2f",dif);
            break;

        case 3: mult = (a * b);
            printf ("\nO Produto é: %2.2f",mult);
            break;

        case 4: div = (a / b);
                if (b == 0)
                    printf ("\nERRO! (Divisão por zero)\n");
                        else
                            printf ("\nA Divisão é: %2.2f\n",div);
                break;
        default:
            printf("\n OPERAÇÃO INVÁLIDA!!");

    }
    printf("\nPrecione ESC para terminar ou ENTER para recomeçar.\n");
    } while (getch () != ESC);
return 0;
}
