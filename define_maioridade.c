#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    int idade;
    const char ESC = 27;

do{
    printf("\nInforme a suua idade: ");
    scanf("%i",&idade);

    if (idade <= 0)
        printf("\n\nIdade inválida! Tente novamente. (ENTER)");
    else if ((idade > 0) && (idade < 16))
        printf("\n\nMaioridade: NÃO.");
    else if ((idade >= 16) && (idade <= 115))
        printf("\n\nMaioridade: SIM.");
        else
            printf("\n\nIdade inválida! Tente novamente. (ENTER)");

printf("\n\nPrecione ESC para terminar.");
printf("\n");
} while(getch() != ESC);
return 0;
}
