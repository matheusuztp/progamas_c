#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int n;
        printf("Escreva um número inteiro ");
        scanf("%i",&n);

            if (n % 2 == 0)
                printf("\nPAR\n");

                    else
                    {
                        printf("\nIMPAR\n");
                    }

            if ((n > 0))
                printf("\nPOSITIVO\n");

                    else
                    {
                        printf("\nNEGATIVO\n");
                    }
            if (n == 0)
                printf("\nZERO\n");
return 0;
}
