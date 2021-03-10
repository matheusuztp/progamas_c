#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, n1, n2;
	
	for (i = 0; i < 2; i++)
	{
		printf("Digite dois números inteiros quaisquer: ");
		scanf("%d%d",&n1,&n2);
		
		if(n1 > n2)
			printf("\nO número %d é maior que %d",n1,n2);
		
		else if(n1 = n2)
			printf("\n Os números %d e %d são iguais!",n1,n2);
	
		else
		{
			printf("\nO número %d é maior que %d",n2,n1);
		}
		
		printf("\n\n");
		
	}
	
	return 0;
}