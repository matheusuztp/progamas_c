#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, n4, media, mediaf;
	int i;
	mediaf = 0;
	
	for(i = 0; i < 2; i++)
	{
		printf("Informe as 4 notas: ");
		scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
		
		media = (n1 + n2 + n3 + n4) / 4;
		
		printf("Média do aluno: %2.2f",media);
		
		if (media > 7)
			printf("\nSituação: Aprovado!");
		else
			printf("\nSituação: Reprovado!");
		
		mediaf = mediaf + media;
		
		printf("\n"); 
	}
	
	printf("\nMédia final da turma: %2.2f",mediaf/2);
	
	return 0;
}