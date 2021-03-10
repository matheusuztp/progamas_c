#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int d, m, a, ds;
    float n, g, del, f;
    const char ESC = 27;

do{
    printf("Informe uma data entre 01/03/1700 - 28/02/2100: ");
    scanf("%i%*c%i%*c%i",&d,&m,&a);

    if (m <= 2){
        g = a - 1;
        f = m + 13;
    }
    else if(m > 2){
        g = a;
        f = m + 1;
    }

n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d;

    if (n < 36523){
        del = 2;
    }
    else if ((n >= 36523) && (n < 73048)){
        del = 1;
    }
    else if (n >= 73048){
        del = 0;
    }

ds = round ( (n / 7.0) * 7.0) + del + 1;

printf("%i",ds);
printf("\n\n");

}while (getch() != ESC);

return 0;
}
