#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    const char ESC = 27;
    do {
        printf("\nInforme dois números inteiros (separe entre espaços): ");
        scanf ("%i%*c%i",&n1,&n2);

        if (n1 > n2)
            printf("\nO segundo número digitado é o menor: %i )",n2);
                else
                    printf("\nO primeiro número digitado é o menor: %i ",n1);
    printf ("\nPrecione ESC para terminar ou ENTER para recomeçar:\n");
    }   while (getch () != ESC);

return 0;
}
