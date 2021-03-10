#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	int n, i, x;
	
	for(i = 0;i < 10; i++)
	{
		printf("Informe um número: ");
		scanf("%d",&n);
		
		x = n % 2;
		
		if(x == 0)
			printf("\nPar.");
		else
		{
			printf("\nImpar.");
		}
		
		if(n > 0)
			printf("\nPositivo.");
		else
		{
			printf("\nNegativo.");
		}
		
		printf("\n\n");
	}
	
	return 0;
}