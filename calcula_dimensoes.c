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
		printf("\n1 - �rea do Tri�ngulo:");
		printf("\n2 - �rea do C�rculo:");
		printf("\n3 - �rea do Cubo:");
		printf("\n4 - �rea do Cil�ndro:");
		printf("\nEscolha: ");
		scanf("%d",&escolha);
		
		switch(escolha)
		{
		case 1:
			printf("\nDefina a Base do Trin�ngulo: ");
			scanf("%f",&bt);
			printf("\nDefina a Altura do Tri�ngulo: ");
			scanf("%f",&ht);
			
			areat = (bt * ht) / 2;
			
			printf("\nA �rea do Tri�ngulo � de %2.2f unidades",areat); 
			break;
		case 2:
			printf("\nDefina o Raio do C�rculo: ");
			scanf("%f",&rc);
			
			acir = 3.1415926 * pow( rc, 2);
			
			printf("\nA �rea do C�rculo � de %2.2f unidades",acir); 
			break;
		case 3:
			printf("\nDefina a Base do Cubo: ");
			scanf("%f",&bc);
			printf("\nDefina a Altura do Cubo: ");
			scanf("%f",&hc);
			printf("\nDefina o Comprimento do Cubo: ");
			scanf("%f",&cc);
						
			acubo = ((bc * hc) * 2) + ((bc * cc) * 2) + ((hc * cc) * 2);
			
			printf("\nA �rea do Cubo � de %2.2f unidades",acubo); 
			break;
		case 4:
			printf("\nDefina o Raio da base do Cil�ndro: ");
			scanf("%f",&rcil);
			printf("\nDefina a Altura do Cil�ndro: ");
			scanf("%f",&hcil);
			
			acil = 3.1415926 * pow( rcil, 2) * hcil;
			
			printf("\nA �rea do Cil�ndro � de %2.2f unidades",acil); 
			break;
		default:
			printf("\nOp��o Inv�lida!");
			break;
		}
		
		printf("\n");
		printf("\nPrecione BARRA DE ESPA�O para recome�ar: ");
		printf("\n\n");
		
	}while(getch() == SPACE);
	
	
	return 0;
}