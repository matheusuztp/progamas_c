#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, nota;
    const char ESC = 27;
    do {
        printf("\nInforme o valor das notas (separe entre espa�os): ");
        scanf ("%f%*c%f",&n1,&n2);

nota = (n1 + n2) / 2.0;

        if (nota >= 7.0)
            printf("\nM�dia: %2.2f -> APROVADO!",nota);
                else if ((nota >= 3.0) && (nota <= 7.0))
                    printf ("\nM�dia: %2.2f -> Em EXAME!",nota);
                        else
                            printf("\nM�dia: %2.2f -> REPROVADO!",nota);
    printf ("\nPrecione ESC para terminar ou ENTER para recome�ar:\n");
    }   while (getch () != ESC);

return 0;
}
