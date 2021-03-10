#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade, i;
	char nome[30];
	char sexo;
	
	for(i = 0; i < 3; i++)
	{
		printf("Digite seu nome: ");
		fflush(stdin);
		gets(nome);
		
		printf("\nDigite sua idade: ");
		scanf("%d",&idade);
		
		printf("\nDefina o sexo (M/F): ");
		scanf("%s",&sexo);
		
		switch(sexo)
		{
			case 'm':
				printf("\nHello! Sr. %s, voce tem %d anos", nome, idade);
				break;
			case 'f':
				printf("\nHello! Sra. %s, voce tem %d anos", nome, idade);
				break;
		}
		
		printf("\n\n");

	}

	return 0;
}