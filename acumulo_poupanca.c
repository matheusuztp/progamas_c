#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL,"Portuguese");

    float v, i, n, p;

     printf("\n\nESSE PROGRAMA CALCULA O VALOR ACUMULADO EM SUA POLPAN�A\n\nO valor constante da aplica��o, a taxa e o numero de meses, respectivamente, s�o de: ");
     scanf("%f%f%f",&p,&i,&n);

    v = (p * pow ( (1 + i) , n) - 1) / i;

     printf("\n\nO valor acumulado na poupan�a � de %2.2f",v);

     return 0;
}
