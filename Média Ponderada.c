#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	int n, max, peso, speso;
	float nota, media;
	
	printf("Este programa trabalha com a M�dia Ponderada");
	printf("\ndefinida entre 4 a 10 notas.");
	
	media = 0;
	n = 1;
	speso = 0;
	
	printf("\n\nDefina o n�mero de notas: ");
	scanf("%d",&max);
	
	printf("\n");
	
do{
	printf("Defina o valor da %d� nota: ",n);
	scanf("%f",&nota);
	printf("Defina o peso: ");
	scanf("%d",&peso);
	printf("\n");
	
	n = n + 1;
	media = media + (nota * peso);
	speso = speso + peso;

	
}while(n <= max);

media = media / speso;

printf("\nA M�dia Ponderada calculada foi de %2.1f",media);

printf("\n");

}