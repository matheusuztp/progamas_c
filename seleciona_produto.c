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
    printf("Informe o preço do produto: ");
    scanf("%f",p);
    printf("\nInforme a categoria do produto: \n1-limpeza \n2-alimentação \n3-vestuário \nCategoria: ");
    scanf("%i",&cat);
    printf("\nInforme a situação do produto: \nR-Com refrigeração \n ou \nN-Sem refrigeração \nSituação: ");
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
                    printf("\nErro! Produtos de limpeza não necessitam de refrigeração!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
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
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
                    break;
                }
            break;
        case 3:
            a = p * 10.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    printf("\nErro! Produtos de limpeza não necessitam de refrigeração!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
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
                    printf("\nErro! Produtos de limpeza não necessitam de refrigeração!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
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
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
                    break;
                }
            break;
        case 3:
            a = p * 18.00 / 100.00;
            printf ("\nValor do aumento: R$%2.2f",a);
                switch (sit)
                {
                case 'R':
                    printf("\nErro! Produtos de limpeza não necessitam de refrigeração!");
                    break;
                case 'N':
                    i = p * 8.00 / 100.00;
                    printf("\nValor do Imposto: R$%2.2f",i);
                    n = p + a - i;
                    printf("\nNovo preço: R4%2.2f",n);
                        if (n <= 50.00)
                            printf("\nClassificação: Barato.");
                        else if ((n > 50.00) && (n < 120.00))
                            printf("\nClassificação: Normal.");
                        else
                            printf ("\nClassificação: Caro.");
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
