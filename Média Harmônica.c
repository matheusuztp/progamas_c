#include <stdio.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"Portuguese");
	
	int max, n;
	float media, nota;
	
	printf("Este programa trabalha com a Média Harmônica");
	printf("\ndefinida entre 4 a 10 notas.");
	
	media = 0;
	n = 1;	
	
	printf("\n\nDefina o número de notas: ");
	scanf("%d",&max);
	
	printf("\n");
	
do{
	printf("Defina o valor da %dª nota: ",n);
	scanf("%f",&nota);
	
	n = n + 1;
	media = media + (1 / nota);

}while(n <= max);

media = media / max;

printf("\nA Média Harmônica calculada foi de %2.2f",media);

printf("\n");
	
}