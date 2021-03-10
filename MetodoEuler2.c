#include <stdio.h> 
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float pi, y;
	int q;
	
	pi = 0;
	y = 1;
	q = 0;
	
	while(q < 10000000){
		pi = pi + 1 / pow(y,2);
		y = y + 1;
		q = q + 1;
	
	}
	
	pi = pow(6 * pi,0.50);
	
	printf("METODO DE WALLIS");
    printf("\n----------------");
    printf("\no valor encontrado foi: %f", pi);
    printf("\no valor original de pi é: %f", M_PI);
    printf("\n");
	
	return 0;
} 
 
  