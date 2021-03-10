#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    float p, d, n;
    int code;
    const char ESC = 27;
do{

    printf("Informe o preço atual do produto: ");
    scanf("%f",&p);
    do{
    printf("\nInforme o código do produto: ");
    scanf("%i",&code);

    if (code <= 0)
        printf("\nCODIGO INVÁLIDO!");
    } while (code <= 0);


    if ((p <= 30.00) && (p >= 0)){
        printf("\n\nNão houve desconto!");
        printf("\nO preço continua o mesmo: R$%2.2f",p);
    }
    else if ((p > 30.00) && (p <= 100.00)){
        d = p * 10.00 / 100.00;
        printf("\n\nValor do desconto: R$%2.2f",d);
        n = p - d;
        printf("\nNovo preço: R$%2.2f",n);
    }
    else if (p > 100.00){
        d = p * 15.00 / 100.00;
        printf("\n\nValor do desconto: R$%2.2f",d);
        n = p - d;
        printf("\nNovo preço: R$%2.2f",n);
    }

    else if (p < 0)
        printf("\n\nERRO!");

printf("\n\nPrecione ESC para terminar ou ENTER para recomeçar.");
printf("\n\n");

} while (getch () != ESC);


return 0;
}
