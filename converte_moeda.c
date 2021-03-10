#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float valor, somavalor;
	int escolha;
	
do{
	printf("Digite o valor de uma moeda: ");
	scanf("%f",&valor);
	
	printf("\nDefina o tipo da moeda\n 1 - Real \n 2 - Dolar: ");
	scanf("%d",&escolha);
	
	switch(escolha)
	{
	case 1:
		printf("\nO valor convertido para Dolar é de $%2.2f ",valor / 3,62759146);
		break;
	case 2:
		printf("\nO valor convertido para Real é de R$%2.2f ",valor * 3,62759146);
		break;
	default:
		printf("\nERRO\n");
		break;
	}
	
	printf("\n\n");
	
	somavalor = somavalor + valor;
	
}while(somavalor < 10000);
	
	return 0;
}