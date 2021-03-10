#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	const char SPACE = 32;
	float areat, bt, ht, acir, rc, acubo, bc, hc, cc, acil, rcil, hcil;
	int escolha;
	
	do{
		printf("O que deseja calcular?");
		printf("\n1 - Área do Triângulo:");
		printf("\n2 - Área do Círculo:");
		printf("\n3 - Área do Cubo:");
		printf("\n4 - Área do Cilíndro:");
		printf("\nEscolha: ");
		scanf("%d",&escolha);
		
		switch(escolha)
		{
		case 1:
			printf("\nDefina a Base do Trinângulo: ");
			scanf("%f",&bt);
			printf("\nDefina a Altura do Triângulo: ");
			scanf("%f",&ht);
			
			areat = (bt * ht) / 2;
			
			printf("\nA Área do Triângulo é de %2.2f unidades",areat); 
			break;
		case 2:
			printf("\nDefina o Raio do Círculo: ");
			scanf("%f",&rc);
			
			acir = 3.1415926 * pow( rc, 2);
			
			printf("\nA Área do Círculo é de %2.2f unidades",acir); 
			break;
		case 3:
			printf("\nDefina a Base do Cubo: ");
			scanf("%f",&bc);
			printf("\nDefina a Altura do Cubo: ");
			scanf("%f",&hc);
			printf("\nDefina o Comprimento do Cubo: ");
			scanf("%f",&cc);
						
			acubo = ((bc * hc) * 2) + ((bc * cc) * 2) + ((hc * cc) * 2);
			
			printf("\nA Área do Cubo é de %2.2f unidades",acubo); 
			break;
		case 4:
			printf("\nDefina o Raio da base do Cilíndro: ");
			scanf("%f",&rcil);
			printf("\nDefina a Altura do Cilíndro: ");
			scanf("%f",&hcil);
			
			acil = 3.1415926 * pow( rcil, 2) * hcil;
			
			printf("\nA Área do Cilíndro é de %2.2f unidades",acil); 
			break;
		default:
			printf("\nOpção Inválida!");
			break;
		}
		
		printf("\n");
		printf("\nPrecione BARRA DE ESPAÇO para recomeçar: ");
		printf("\n\n");
		
	}while(getch() == SPACE);
	
	
	return 0;
}