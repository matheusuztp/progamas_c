#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    char sexo;
    printf("\nInforme seu sexo (M/F): ");
    scanf("%c",&sexo);
        switch (sexo)
        {
            case ('M'):
                printf("\nSexo Masculino.");
                break;
            case ('F'):
                printf("\nSexo Feminino.");
                break;
            default:
                printf("\nSexo Inválido.");
        }
return 0;
}
