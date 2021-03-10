#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int ehBissexto(int ano) {
    if(ano % 4 == 0)
        return 1;
    else
        return 0;
}

int pegaMes() {
    int m1 = 0;
    while(m1 < 1 || m1 > 12){
        printf("\nMês: ");
        scanf("%i",&m1);
    }
    return m1;
}

int pegaDia(int mes, int ano){
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ok = 0, d1;
    while(!ok){
        printf("\nDia: ");
        scanf("%i",&d1);
        if(d1 <= dias[mes - 1] && d1 > 0)
            { ok = 1; }
        else
            {
                if((mes == 2 && d1 > 0) && d1 <= dias[2 - 1] + ehBissexto(ano))
                    { ok = 1;}
            }
    }
}

int main () {
    int dif, d2, m2 = 0, a2, d1, m1, a1, d3, m3, a3;

    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int bissexto = 0, ok = 0;

    printf("\nEste programa foi feito para calcular a diferença entre duas datas: ");

    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme a primeira data no fornato aaaa/mm/dd: ");

    printf("\nAno: ");
    scanf("%i",&a1);

    m1 = pegaMes();

    d1 = pegaDia(m1, a1);

    printf("\nInforme a segunda data no formato dd/mm/aaaa: ");

    printf("\nAno: ");
    scanf("%i",&a2);

    m2 = pegaMes();

    d2 = pegaDia(m2, a2);

    dif = (a2 * 365 + m2 * 30 + d2) - (a1 * 365 + m1 * 30 + d1);
    a3 = dif / 365;
    m3 = dif % 365 / 30;
    d3 = dif % 365 % 30;

    printf("\nA diferença entre as duas datas é de %02i/%02i/%i",d3,m3,a3);

    return 0;
    }
