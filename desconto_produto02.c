#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float p, d, f;
    int code, quant;
    const char ESC = 27;

do{
    printf("Informe o codigo do produto comprado: ");
    scanf("%i",&code);
    printf("\nInforme a quantidade do produto: ");
    scanf("%i",&quant);

    switch (code)
    {
     case 1 ... 10:
        printf("\n Preço unitário do produto comprado: R$ 10.00");
        p = 10.00 * quant;
        printf("\nPreço total da nota: R$ %2.2f",p);
            if (p < 250.00){
                d = p * 5.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if ((p >= 250.00) && (p <= 500.00)){
                d = p * 10.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if (p > 500.00){
                d = p * 15.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
        f = p - d;
        printf("\nValor final da nota: R$ %2.2f",f);
        break;
     case 11 ... 20:
        printf("\n Preço unitário do produto comprado: R$ 10.00");
        p = 15.00 * quant;
        printf("\nPreço total da nota: R$ %2.2f",p);
            if (p < 250.00){
                d = p * 5.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if ((p >= 250.00) && (p <= 500.00)){
                d = p * 10.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if (p > 500.00){
                d = p * 15.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
        f = p - d;
        printf("\nValor final da nota: R$ %2.2f",f);
        break;
     case 21 ... 30:
        printf("\n Preço unitário do produto comprado: R$ 10.00");
        p = 20.00 * quant;
        printf("\nPreço total da nota: R$ %2.2f",p);
            if (p < 250.00){
                d = p * 5.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if ((p >= 250.00) && (p <= 500.00)){
                d = p * 10.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if (p > 500.00){
                d = p * 15.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
        f = p - d;
        printf("\nValor final da nota: R$ %2.2f",f);
        break;
     case 31 ... 40:
        printf("\n Preço unitário do produto comprado: R$ 10.00");
        p = 30.00 * quant;
        printf("\nPreço total da nota: R$ %2.2f",p);
            if (p < 250.00){
                d = p * 5.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if ((p >= 250.00) && (p <= 500.00)){
                d = p * 10.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
            else if (p > 500.00){
                d = p * 15.00 / 100.00;
                printf("\nValor do desconto: R$ %2.2f",d);
            }
        f = p - d;
        printf("\nValor final da nota: R$ %2.2f",f);
        break;
     default:
        printf("\nERRO\n");
    }

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}
