#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int l1, l2, l3;
    const char ESC = 27;
    do
    {
    printf("\nInforme as medidas do triângulo (separe com espaço os valores): ");
    scanf("%i%*c%i%*c%i",&l1,&l2,&l3);

        if (((l1 + l2) < l3) || ((l2 + l3) < l1) || ((l3 + l1) < l2))
            printf("\nO Triângulo nao existe.\n");
                else if ((l1 == l2) && (l2 == l3))
                    printf("\nTriângulo: Equilátero.\n");
                        else if ((l1 == l2) && (l2 != l3) || (l2 == l3) && (l1 != l2) || (l1 == l3) && (l3 != l2))
                            printf("\nTriângulo: Isóceles.");
                                else if (l1 != l2 != l3)
                                    printf("\nTriângulo: Escaleno.");

    printf("\n\nPrecione ESC para terminar ou ENTER para recomeçar:");
    printf("\n\n");

} while (getch() != ESC);

system("PAUSE");
return 0;
}
