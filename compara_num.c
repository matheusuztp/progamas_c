#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, i;
	
	for(i = 0; i < 7; i++)
	{
		printf("Informe dois números: ");
		scanf("%d%d",&n1,&n2);
		
		printf("Soma: %d",n1 + n2);
		printf("\nDiferença: %d",n1 - n2);
		printf("\n");
	}
	
	
	return 0;
}