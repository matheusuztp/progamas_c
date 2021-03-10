#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int idade;
    const char ESC = 27;
    do
    {
    printf("\nInforme a sua idade: ");
    scanf("%i",&idade);

        switch (idade)
        {
            case 0:
                printf("\nIDADE INVÁLIDA\n");
                break;
            case 1 ... 10:
                printf("\nCategoria: Infantil.\n");
                break;
            case 11 ... 17:
                printf("\nCategoria: Juvenil.\n");
                break;
            case 18 ... 100:
                printf("\nCategoria: Senior.\n");
                break;
        }

    printf("\nPrecione ESC para terminar ou ENTER para recomeçar");
    printf("\n");

      }  while (getch() != ESC);

system("PAUSE");
return 0;
}
