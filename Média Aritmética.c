#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	int n, max;
	float nota, media;
	
	printf("Este programa trabalha com a M�dia Aritm�tica");
	printf("\ndefinida entre 4 a 10 notas.");
	
	nota = 0;
	media = 0;
	n = 1;
	
	printf("\n\nDefina o n�mero de notas: ");
	scanf("%d",&max);
	
	printf("\n");
	
do{
	printf("Defina o valor da %d� nota: ",n);
	scanf("%d",&nota);
	
	n = n + 1;
	media = media + nota

	
}while(n <= max);

media = media / max;

printf("\nA M�dia Aritm�tica calculada foi de %2.1f",media);

printf("\n");

}