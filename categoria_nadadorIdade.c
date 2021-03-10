#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int idade;
    const char ESC = 27;

do{
    printf("Informe a idade do nadador: ");
    scanf("%i",&idade);

    if (idade < 5)
        printf("\nCategoria: Inválida!");
    else if ((idade >= 5) && (idade <= 7))
        printf("\nCategoria: Infantil.");
    else if ((idade >= 8) && (idade <= 10))
        printf("\nCategoria: Juvenil.");
    else if ((idade >= 11)&&(idade <=15))
        printf("\nCategoria: Adolescente.");
    else if ((idade >= 16) && (idade <= 30))
        printf("\nCategoria: Adulto.");
    else
        printf("\nCategoria: Sênior.");

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}
