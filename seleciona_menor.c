#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    const char ESC = 27;
    do {
        printf("\nInforme dois n�meros inteiros (separe entre espa�os): ");
        scanf ("%i%*c%i",&n1,&n2);

        if (n1 > n2)
            printf("\nO segundo n�mero digitado � o menor: %i )",n2);
                else
                    printf("\nO primeiro n�mero digitado � o menor: %i ",n1);
    printf ("\nPrecione ESC para terminar ou ENTER para recome�ar:\n");
    }   while (getch () != ESC);

return 0;
}
