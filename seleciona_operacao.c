#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
        setlocale(LC_ALL,"Portuguese");
        float a, b, op1, op21, op22, op31, op32;
        int op;
        const char ESC = 27;

    do {
        printf ("Informe dois n�meros reais (separe entre espa�os): ");
        scanf ("%f%*c%f",&a,&b);
        printf ("\nEscolha uma op��o: \n 1 - O primeiro n�mero elevado ao segundo n�mero; \n 2 - Raiz quadrada de cada um dos n�meros; \n 3 - Raiz c�bica de cada um dos n�meros; \n Op��o escolhida: ");
        scanf ("%i",&op);

    switch (op)
    {
        case 1: op1 = pow(a,b);
            printf ("\nO primeiro n�mero elevado ao segundo n�mero �: %2.2f",op1);
            break;

        case 2: op21 = pow(a, 1.0 / 2.0);
                op22 = pow(b, 1.0 / 2.0);
            printf ("\nA raiz quadrada de cada um dos n�meros �: %2.2f e %2.2f",op21, op22);
            break;

        case 3: op31 = pow(a, 1.0 / 3.0);
                op32 = pow(b, 1.0 / 3.0);
            printf ("\nA raiz c�bica de cada um dos n�meros �: %2.2f e %2.2f",op31, op32);
            break;

        default:
            printf("\n OPERA��O INV�LIDA!!");

    }
    printf("\nPrecione ESC para terminar ou ENTER para recome�ar.\n");
    } while (getch () != ESC);
return 0;
}
