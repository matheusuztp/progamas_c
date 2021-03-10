#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	float pi, n, i;

	pi = 1;
	i = 1;
	n = 0;
  
	do{
      pi = pi * ((2 * i) * (2 * i)) / ((2 * i - 1) * (2 * i + 1));
      i = i + 1;
      n = n + 1;
	}while(n <= 100000);

	pi = 2 * pi;
  
	printf("METODO DE WALLIS");
	printf("\n----------------");
	printf("\no valor encontrado foi: %f", pi);
	printf("\no valor original de pi é: %f", M_PI);
	printf("\n");
}