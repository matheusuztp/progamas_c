#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    const char ESC = 27;
    do
    {
    printf("\nInforme 3 números inteiros (separe com espaço os valores): ");
    scanf("%i%*c%i%*c%i",&n1,&n2,&n3);

        if ((n1 >= n2) && (n2 >= n3))
            printf("\nOrdem: %i, %i, %i.\n",n3,n2,n1);
                else if ((n1 <= n2) && (n2 <= n3))
                    printf("\nOrdem: %i, %i, %i.\n",n1,n2,n3);
                        else if ((n1 <= n2) && (n2 >= n3) && (n1 <= n3))
                            printf("\nOrdem: %i, %i, %i.\n",n1,n3,n2);
                                else if ((n1 <= n2) && (n2 >= n3) && (n1 >= n3))
                                    printf("\nOrdem: %i, %i, %i.\n",n3,n1,n2);
                                        else if ((n1 >= n2) && (n2 <= n3) && (n1 <= n3))
                                            printf("\nOrdem: %i, %i, %i.\n",n2,n1,n3);
                                                else
                                                     printf("\nOrdem: %i, %i, %i.\n",n2,n3,n1);

    printf("\nPrecione ESC para terminar ou ENTER para recomeçar:");
    printf("\n");

      }  while (getch() != ESC);

system("PAUSE");
return 0;
}
