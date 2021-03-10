#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float vol, abase, diam, h;
	const char escolha = 83;
	
	do{
		printf("Defina o valor do diâmetro do cilindro: ");
		scanf("%f",&diam);
		
		printf("Defina o valor da altura do cilindro: ");
		scanf("%f",&h);
		
		abase = (diam * (pow(3.1415926,2))) / 2;
		
		vol = abase * h;
		
		printf("\nO Volume do cilindro é de: %2.2f",vol);
		
		printf("\n\nGostaria de tentar novamente? ");
		   	
	}while(getch() == escolha);
	 	
	return 0;
}