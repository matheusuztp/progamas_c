#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    int h1, m1, s1, h2, m2, s2, h3, m3, s3, dif;

    setlocale(LC_ALL,"Portuguese");

    printf("\nInfome o primeiro horário (hh:mm:ss) : ");
    scanf("%i%*c%i%*c%i",&h1,&m2,&s1);

    printf("\nInforme o segundo horário (hh:mm:ss) : ");
    scanf("%i%*c%i%*c%i",&h2,&m2,&s2);

    dif = ((h2 * 60 * 60) + (m2 * 60) + s2) - ((h1 * 60 * 60) + (m1 * 60) + s1);
    h3 = dif / 3600;
    m3 = dif % 3600 / 60;
    s3 = dif % 3600 % 60;

    printf("\n\nO valor da diferença no formato hh:mm:ss é %02i:%02i:%02i", h3, m3, s3);

    return 0;

    }
