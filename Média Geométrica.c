#include <stdio.h>
#include <locale.h>
#include <math.h>


main() {
	setlocale(LC_ALL,"Portuguese");
	
	int n, max;
	float media, nota;
	
	printf("Este programa trabalha com a M�dia Geom�trica");
	printf("\ndefinida entre 4 a 10 notas.");
	
	media = 1;
	n = 1;
	
	printf("\n\nDefina o n�mero de notas: ");
	scanf("%d",&max);
	
	printf("\n");
	
do{
	printf("Defina o valor da %d� nota: ",n);
	scanf("%f",&nota);
	
	n = n + 1;
	media = media * nota;
	smedia = smedia * media;
	
	printf("\n%f",media);
	
	printf("\n");
	
}while(n <= max);

printf("\nA M�dia Geom�trica calculada foi de %2.1f",pow(media,(float)1/max));

printf("\n");

}