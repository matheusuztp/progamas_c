#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    int escolha;
    float valor, vc;
    const char ESC = 27;
do{
    printf("Informe o tipo de investimento: \n\n1 - Poupança; \n2 - Fundos de renda fixa; \n\nEscolha: ");
    scanf("%i",&escolha);

        switch (escolha)
        {
            case 1:
                printf("\n\nInforme o valor do investimento: ");
                scanf("%f",&valor);
                vc = valor + (3.00 * valor / 100.00);
                printf("\nValor corrigido apos um mês de investimento: R$%2.2f",vc);
                break;
            case 2:
                printf("\n\nInforme o valor do investimento: ");
                scanf("%f",&valor);
                vc = valor + (4.00 * valor / 100.00);
                printf("\nValor corrigido apos um mês de investimento: R$%2.2f",vc);
                break;
            default:
                printf("\nOPERAÇÃO INVÁLIDA!!\n");
                break;
        }
printf("\n\nPrecione ESC para terminar ou ENTER para recomeçar.");
printf("\n\n");

} while (getch () != ESC);


return 0;
}
