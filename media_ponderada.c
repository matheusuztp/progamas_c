#include <stdio.h>
#include <locale.h>
int main () {
float n1, p1, n2, p2, media;
setlocale(LC_ALL,"Portuguese");
printf("informe a nota da matéria do 1º semestre: ");
scanf("%f",&n1);
printf("informe o peso da materia do 1º semestre: ");
scanf("%f",&p1);
printf("informe a nota da materia do 2º semestre: ");
scanf("%f",&n2);
printf("informe o peso da meteria do 2º semestre: ");
scanf("%f",&p2);
media = ((p1 * n1) + (p2 * n2)) / (p1 + p2);
printf("A sua média é de: %2.2f",media);
return 0;
}
