#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    printf("\nInforme o valor de a e de b, respectivamente ");
    scanf("%i%*c%i",&a,&b);
        if (a == b)
            printf("\nO valor da vari�vel a � igual ao valor da vari�vel b.");

            else
                printf("\nO valor da vari�vel a n�o � igual ao valor da vari�vel b.");

       return 0;
}
