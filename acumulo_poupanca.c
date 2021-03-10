#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL,"Portuguese");

    float v, i, n, p;

     printf("\n\nESSE PROGRAMA CALCULA O VALOR ACUMULADO EM SUA POLPANÇA\n\nO valor constante da aplicação, a taxa e o numero de meses, respectivamente, são de: ");
     scanf("%f%f%f",&p,&i,&n);

    v = (p * pow ( (1 + i) , n) - 1) / i;

     printf("\n\nO valor acumulado na poupança é de %2.2f",v);

     return 0;
}
