#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, n1, n2;
	
	for (i = 0; i < 2; i++)
	{
		printf("Digite dois n�meros inteiros quaisquer: ");
		scanf("%d%d",&n1,&n2);
		
		if(n1 > n2)
			printf("\nO n�mero %d � maior que %d",n1,n2);
		
		else if(n1 = n2)
			printf("\n Os n�meros %d e %d s�o iguais!",n1,n2);
	
		else
		{
			printf("\nO n�mero %d � maior que %d",n2,n1);
		}
		
		printf("\n\n");
		
	}
	
	return 0;
}