/* 08 - Calcular o sal�rio final de um trabalhador, recebendo a quantidade de horas trabalhadas, a quantidade de horas extras,
quantidade de horas ausentes e o valor do sal�rio m�nimo, sabendo que:
a)as horas trabalhadas e ausentes valem 4% do sal�rio m�nimo;
b)as horas extras valem 50% a mais do que as horas trabalhadas;
c)o sal�rio final � igual a soma das horas trabalhadas com as hora extras, descontadas as horas ausentes e 11% de INSS.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
    float sf, ht, he, ha, sm;

    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme o valor do sal�rio m�nimo: ");
    scanf("%f",&sm);

    printf("\nInforme o valor do n�mero de horas trabalhadas: ");
    scanf("%f",&ht);

    printf("\nInforme o valor do n�mero de horas ausente: ");
    scanf("%f",&ha);

    printf("\nInforme o valor do n�mero de horas extras: ");
    scanf("%f",&he);

    ht = sm * 4 / 100;
    ha = sm * 4 / 100;
    he = sm * 54 / 100;

sf = sm + ((ht + he) - ha) - 11/100;

    printf("\nO sal�rio final � de %2.2f",sf," , onde s�o descontados 11% pelo INSS");

    return 0;
}
