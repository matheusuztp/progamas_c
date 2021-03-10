#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float vm, x, y;
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Informe o Distancia percorrida em metros: ");
		scanf("%f",&x);
		printf("Informe o Tempo em segundos: ");
		scanf("%f",&y);
		
		vm = x / y;
		
		printf("\nA velocidade média do automóvel foi de: %2.2f m/s²",vm);
		printf("\n\n");
	}
	
	return 0;
}