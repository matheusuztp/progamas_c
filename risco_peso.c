#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    float peso;
    int idade;
    const char ESC = 27;

do{
    printf("Informe a idade da pessoa: ");
    scanf("%i",&idade);
    printf("\nInforme o peso da pessoa: ");
    scanf("%f",&peso);

    if ((idade <= 0) || (idade >= 115))
        printf("\nIdade Inválida.");
    else if ((idade > 0) && (idade < 20)){
        if (peso <= 0)
            printf("\nPeso inexistente.");
        else if ((peso > 0) && (peso <= 60.00))
            printf("\nGrau de risco: 9");
        else if ((peso > 60.00) && (peso <= 90.00))
            printf("\nGrau de risco: 8");
        else if (peso > 90)
            printf("\nGrau de risco: 7");
    }
    else if ((idade >= 20) && (idade < 50)){
        if (peso <= 0)
            printf("\nPeso inexistente.");
        else if ((peso > 0) && (peso <= 60.00))
            printf("\nGrau de risco: 6");
        else if ((peso > 60.00) && (peso <= 90.00))
            printf("\nGrau de risco: 5");
        else if (peso > 90)
            printf("\nGrau de risco: 4");
    }
    else if (idade >= 50){
        if (peso <= 0)
            printf("\nPeso inexistente.");
        else if ((peso > 0) && (peso <= 60.00))
            printf("\nGrau de risco: 3");
        else if ((peso > 60.00) && (peso <= 90.00))
            printf("\nGrau de risco: 2");
        else if (peso > 90)
            printf("\nGrau de risco: 1");
    }
    else
        printf("\nERRO\n");

printf("\n\nPrecione ESC para terminar.");
printf("\n\n");
} while(getch() != ESC);
return 0;
}
