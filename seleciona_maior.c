#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    const char ESC = 27;
    do {
        printf("\nInforme três números inteiros (separe entre espaços): ");
        scanf ("%i%*c%i%*c%i",&n1,&n2,&n3);

        if ((n1 > n2) && (n1 > n3))
            printf("\nO primeiro número digitado é o maior: %i",n1);
                else if ((n2 > n1) && (n2 > n3))
                    printf("\nO segundo número digitado é o maior: %i",n2);
                        else if ((n3 > n2) && (n3 > n1))
                            printf("\nO terceiro número é o maior: %i", n3);
    printf ("\nPrecione ESC para terminar ou ENTER para recomeçar:\n");
    }   while (getch () != ESC);

return 0;
}
