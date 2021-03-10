#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, media, mediaf;
	int i, peso1, peso2;

	mediaf = 0;
	
	printf("Defina o peso da 1º nota: ");
	scanf("%d",&peso1);
	
	printf("Defina o peso da 2º nota: ");
	scanf("%d",&peso2);
	
	for(i = 0; i < 2; i++)
	{
		printf("\nDefina o valor da 1º nota: ");
		scanf("%f",&n1);
		
		printf("Defina o valor da 2º nota: ");
		scanf("%f",&n2);
	
		media = ((n1 * peso1) + (n2 * peso2)) / (peso1 + peso2);
		
		printf("\nMédia do aluno%d: %2.2f",i,media);
		printf("\n");
		
		mediaf = mediaf + media;
	}
	
	
	printf("\n\nMedia Final: %2.2f",mediaf/2);

	return 0;
}