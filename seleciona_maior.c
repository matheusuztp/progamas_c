#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    const char ESC = 27;
    do {
        printf("\nInforme tr�s n�meros inteiros (separe entre espa�os): ");
        scanf ("%i%*c%i%*c%i",&n1,&n2,&n3);

        if ((n1 > n2) && (n1 > n3))
            printf("\nO primeiro n�mero digitado � o maior: %i",n1);
                else if ((n2 > n1) && (n2 > n3))
                    printf("\nO segundo n�mero digitado � o maior: %i",n2);
                        else if ((n3 > n2) && (n3 > n1))
                            printf("\nO terceiro n�mero � o maior: %i", n3);
    printf ("\nPrecione ESC para terminar ou ENTER para recome�ar:\n");
    }   while (getch () != ESC);

return 0;
}
