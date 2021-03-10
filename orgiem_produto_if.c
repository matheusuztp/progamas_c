#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float p;
    int code;
    const char ESC = 27;

do{
    printf("Informe o preço do produto: ");
    scanf("%f",&p);
    printf("\nInforme o codigo de origem: ");
    scanf("%i",&code);

    if (code == 1)
        printf("\nProcedencia: Sul.");
    else if (code == 2)
        printf("\nProcedencia: Norte.");
    else if (code == 3)
        printf("\nProcedencia: Leste.");
    else if (code == 4)
        printf("\nProcedencia: Oeste.");
    else if ((code == 5) || (code == 6))
        printf("\nProcedencia: Nordeste.");
    else if ((code >= 7) && (code <= 9))
        printf("\nProcedencia: Sudeste.");
    else if ((code >= 10) && (code <= 20))
        printf("\nProcedencia: Centro-oeste.");
    else if ((code >= 21) && (code <= 30))
        printf("\nProcedencia: Nordeste.");
    else
        printf("\nProcedencia Inválida.");

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}
