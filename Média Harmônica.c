#include <stdio.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"Portuguese");
	
	int max, n;
	float media, nota;
	
	printf("Este programa trabalha com a M�dia Harm�nica");
	printf("\ndefinida entre 4 a 10 notas.");
	
	media = 0;
	n = 1;	
	
	printf("\n\nDefina o n�mero de notas: ");
	scanf("%d",&max);
	
	printf("\n");
	
do{
	printf("Defina o valor da %d� nota: ",n);
	scanf("%f",&nota);
	
	n = n + 1;
	media = media + (1 / nota);

}while(n <= max);

media = media / max;

printf("\nA M�dia Harm�nica calculada foi de %2.2f",media);

printf("\n");
	
}