#include <stdio.h>
#include <locale.h>
int main () {
    float c, f;
    setlocale(LC_ALL,"Portuguese");
    printf("informe a temperatura em celsuis: ");
    scanf("%f",&c);
    f = (9 * c + 160) / 5;
    printf("O valor da temperatura em fahreinheint é %2.2f",f);
    return 0;
}
