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
        printf ("Informe dois números reais (separe entre espaços): ");
        scanf ("%f%*c%f",&a,&b);
        printf ("\nEscolha uma opção: \n 1 - O primeiro número elevado ao segundo número; \n 2 - Raiz quadrada de cada um dos números; \n 3 - Raiz cúbica de cada um dos números; \n Opção escolhida: ");
        scanf ("%i",&op);

    switch (op)
    {
        case 1: op1 = pow(a,b);
            printf ("\nO primeiro número elevado ao segundo número é: %2.2f",op1);
            break;

        case 2: op21 = pow(a, 1.0 / 2.0);
                op22 = pow(b, 1.0 / 2.0);
            printf ("\nA raiz quadrada de cada um dos números é: %2.2f e %2.2f",op21, op22);
            break;

        case 3: op31 = pow(a, 1.0 / 3.0);
                op32 = pow(b, 1.0 / 3.0);
            printf ("\nA raiz cúbica de cada um dos números é: %2.2f e %2.2f",op31, op32);
            break;

        default:
            printf("\n OPERAÇÃO INVÁLIDA!!");

    }
    printf("\nPrecione ESC para terminar ou ENTER para recomeçar.\n");
    } while (getch () != ESC);
return 0;
}
