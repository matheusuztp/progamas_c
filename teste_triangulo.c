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
    printf("\nInforme as medidas do tri�ngulo (separe com espa�o os valores): ");
    scanf("%i%*c%i%*c%i",&l1,&l2,&l3);

        if (((l1 + l2) < l3) || ((l2 + l3) < l1) || ((l3 + l1) < l2))
            printf("\nO Tri�ngulo nao existe.\n");
                else if ((l1 == l2) && (l2 == l3))
                    printf("\nTri�ngulo: Equil�tero.\n");
                        else if ((l1 == l2) && (l2 != l3) || (l2 == l3) && (l1 != l2) || (l1 == l3) && (l3 != l2))
                            printf("\nTri�ngulo: Is�celes.");
                                else if (l1 != l2 != l3)
                                    printf("\nTri�ngulo: Escaleno.");

    printf("\n\nPrecione ESC para terminar ou ENTER para recome�ar:");
    printf("\n\n");

} while (getch() != ESC);

system("PAUSE");
return 0;
}
