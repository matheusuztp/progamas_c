#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float he, hf, hem, hfm, h;
    const char ESC = 27;

do{
    printf("Informe o número de horas extras do funcionário: ");
    scanf("%f",&he);
    printf("Informe o número de horas que o funcionário faltou: ");
    scanf("%f",&hf);

hem = he * 60;
hfm = hf * 60;
h = hem - (2.00 / 3.00 * hfm);

    if ((h < 600) && (h >= 0)){
        printf("\nHoras (min): %2.2f",h);
        printf("\nPrêmio: R$ 100.00");
    }
    else if ((h >= 600.00) && (h < 1200.00)){
        printf("\nHoras (min): %2.2f",h);
        printf("\nPrêmio: R$ 200.00");
    }
    else if ((h >= 1200.00) && (h < 1800.00)){
        printf("\nHoras (min): %2.2f",h);
        printf("\nPrêmio: R$ 300.00");
    }
    else if ((h >= 1800.00) && (h < 2400.00)){
        printf("\nHoras (min): %2.2f",h);
        printf("\nPrêmio: R$ 400.00");
    }
    else if (h >= 2400.00){
        printf("\nHoras (min): %2.2f",h);
        printf("\nPrêmio: R$ 500.00");
    }
    else
        printf("\nERRO\n");

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}

