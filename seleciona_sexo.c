#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    char sexo;
    printf("\nInforme seu sexo (M/F) ");
    scanf("%c",&sexo);

        if (sexo == 'M')
            printf("\nSexo Masculino");
            else if (sexo == 'F')
                printf("\nSexo Feminino");
                    else
                        printf("\nSexo Inválido");

return 0;
}
