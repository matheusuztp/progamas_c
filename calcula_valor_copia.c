#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int f;
    float v;
    printf("\nDetermine o numero de folhas destinadas à cópia: ");
    scanf("%i",&f);

        if (f <= 100)
        {
            v = 0.25 * f;
            printf("\nTotal a ser pago: %2.2f",v);
        }
            else
            {
            v = 0.20 * f;
            printf("\nTotal a ser pago: %2.2f",v);
            }
return 0;
}
