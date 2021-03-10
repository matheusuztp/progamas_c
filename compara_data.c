#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
    int dif ,d1, m1, a1, d2, m2, a2, d3, m3, a3;

    printf("Informe o dia (1 a 31) da primeira data: ");
    scanf("%d",&d1);

    printf("informe o mês (1 a 12) da primeira data: ");
    scanf("%i",&m1);

    printf("informe o ano da primeira data: ");
    scanf("%d",&a1);

    printf("informe o dia (1 a 31) da segunda data: ");
    scanf("%i",&d2);

    printf("informe o mês (1 a 12) da segunda data: ");
    scanf("%d",&m2);

    printf("informe o ano da segunda data: ");
    scanf("%d",&a2);

    system("pause");

    dif = (a2 * 365 + m2 * 30 + d2) - (a1 * 365 + m1 * 30 + d1);

    a3 = dif / 365;
    m3 = dif % 365 / 30;
    d3 = dif % 365 % 30;

    printf("\na diferença é de %d,%d,%d",d3,m3,a3);

    return 0;
}
