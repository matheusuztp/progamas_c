#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

/* ENTRADA DE DADOS: Dia, mês e ano
SAÍDA DE DADOS: Dia da semana correspondente
PROCESSAMENTO: A partir do mês
*/

int main (){

int d, m , a, ds;
float f, g , dt, n;
const char ENTER = 13;
setlocale(LC_ALL, "Portuguese");

do{

printf("Informe o dia: ");
  scanf("%d",&d);
  printf("Informe o mês: ");
  scanf("%d",&m);
  printf("Informe o ano com quatro dígitos: ");
  scanf("%d",&a);

  if ( m <= 2)
    {
    g = a-1;
    f = m + 13;
    n = ((int)(365.25*g) + (int)(30.6*f)) - 621049  + d;
            if (n < 36523)
            {
              dt = 2;
            }
            else if ( (36523 <= n) && (n < 73048))
            {
              dt = 1;
            }
            else{
              dt = 0;
            }
    }
   else if ( m > 2)
    {
    g = a;
    f = m + 1;
    n = (int)(365.25*g) + (int)(30.6*f) - 621049  + d;
          if (n < 36523)
            {
              dt = 2;
            }
            else if ( (36523 <= n) && (n < 73048))
            {
              dt = 1;
            }
            else
            {
             dt = 0;
            }
    }

    ds = round(((n/7) - (int)(n/7)) * 7) + dt + 1;
             switch (ds) {
                         case 1:
                            printf("\nDomingo\n");
                            break;
                         case 2:
                             printf("\nSegunda-Feira\n");
                             break;
                         case 3:
                             printf("\nTerça-Feira\n");
                             break;
                         case 4:
                             printf("\nQuarta-feira\n");
                             break;
                         case 5:
                             printf("\nQuinta-feira\n");
                             break;
                         case 6:
                             printf("\nSexta-feira\n");
                             break;
                         case 7:
                             printf("\nSábado\n");
                             break;
                                 }

} while (getch() != ENTER);
return 0;
}
