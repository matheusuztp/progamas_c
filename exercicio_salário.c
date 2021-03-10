/* 08 - Calcular o salário final de um trabalhador, recebendo a quantidade de horas trabalhadas, a quantidade de horas extras,
quantidade de horas ausentes e o valor do salário mínimo, sabendo que:
a)as horas trabalhadas e ausentes valem 4% do salário mínimo;
b)as horas extras valem 50% a mais do que as horas trabalhadas;
c)o salário final é igual a soma das horas trabalhadas com as hora extras, descontadas as horas ausentes e 11% de INSS.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
    float sf, ht, he, ha, sm;

    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme o valor do salário mínimo: ");
    scanf("%f",&sm);

    printf("\nInforme o valor do número de horas trabalhadas: ");
    scanf("%f",&ht);

    printf("\nInforme o valor do número de horas ausente: ");
    scanf("%f",&ha);

    printf("\nInforme o valor do número de horas extras: ");
    scanf("%f",&he);

    ht = sm * 4 / 100;
    ha = sm * 4 / 100;
    he = sm * 54 / 100;

sf = sm + ((ht + he) - ha) - 11/100;

    printf("\nO salário final é de %2.2f",sf," , onde são descontados 11% pelo INSS");

    return 0;
}
