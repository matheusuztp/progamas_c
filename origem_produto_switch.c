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

   switch (code)
   {
    case 1:
        printf("\nProcedencia: Sul.");
        break;
    case 2:
        printf("\nProcedencia: Norte.");
        break;
    case 3:
        printf("\nProcedencia: Leste.");
        break;
    case 4:
        printf("\nProcedencia: Oeste.");
        break;
    case 5 ... 6:
        printf("\nProcedencia: Nordeste.");
        break;
    case 7 ... 9:
        printf("\nProcedencia: Sudeste.");
        break;
    case 10 ... 20:
        printf("\nProcedencia: Centro-oeste.");
        break;
    case 21 ... 30:
        printf("\nProcedencia: Nordeste.");
        break;
    default:
        printf("\nProcedencia Inválida.");
   }

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}
