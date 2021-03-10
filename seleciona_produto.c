#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float a, i, n, p;
    int cat;
    char sit;
    const char ESC = 27;

do{
    printf("Informe o pre�o do produto: ");
    scanf("%f",p);
    printf("\nInforme a categoria do produto: \n1-limpeza \n2-alimenta��o \n3-vestu�rio \nCategoria: ");
    scanf("%i",&cat);
    printf("\nInforme a situa��o do produto: \nR-Com refrigera��o \n ou \nN-Sem refrigera��o \nSitua��o: ");
    scanf("%s",&sit);
    if (p <= 25.00){
        switch (cat)
        {
        case 1:
            a = p * 5.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    printf("\nErro! Produtos de limpeza n�o necessitam de refrigera��o!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                }
            break;
        case 2:
            a = p * 8.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    i = p * 5.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                }
            break;
        case 3:
            a = p * 10.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    printf("\nErro! Produtos de limpeza n�o necessitam de refrigera��o!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                }
            break;
        }
    }
    else{
        switch (cat)
        {
        case 1:
            a = p * 12.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    printf("\nErro! Produtos de limpeza n�o necessitam de refrigera��o!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                }
            break;
        case 2:
            a = p * 15.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    i = p * 5.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                }
            break;
        case 3:
            a = p * 18.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    printf("\nErro! Produtos de limpeza n�o necessitam de refrigera��o!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo pre�o: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassifica��o: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassifica��o: Normal.");
                        else
                            printf ("\nClassifica��o: Caro.");
                    break;
                }
            break;
        }

    }

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}
