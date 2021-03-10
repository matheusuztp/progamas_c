#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int d;
    float b, sb, sl, inss, ir;

    printf("Informe o salário bruto: ");
    scanf("%f",&sb);
    printf("Informe o número de dependentes: ");
    scanf("%i",&d);

    if (sb <= 1317.07){
        printf("\nIsento de Imposto de renda");
    }
    else if ((sb >= 1317.08) && (sb <= 2195.12)){
        inss = sb * 9 / 100;
        printf("\nValor do INSS: R$%2.2f",inss);
    }
    else if ((sb >= 2195.13) && (sb <= 4390.24)){
        inss = sb * 11 / 100;
        printf("\nValor do INSS: R$%2.2f",inss);
    }
    else{
        inss = 4390.24 * 11 / 100;
        printf("\nValor do INSS: R$%2.2f",inss);
    }

    b = sb - inss - d * 179.71;

        if ((b >= 1.787,78) && (b <= 2.679,29)){
            ir = b * 7.5 / 100 - 134.08;
        }
        else if ((b >= 2679.30) && (b <= 3572.43)){
            ir = b * 15 / 100 - 335.03;
        }
        else if ((b >= 3572.44) && (b <= 4463.81)){
            ir = b * 22.5 / 100 - 602.96;
        }
        else if (b > 4463.81){
            ir = b * 27.5 / 100 - 826.15;
        }

    printf("\nValor do IR: R$%2.2f",ir);

sl = sb - inss - ir;

    printf("\nValor do salário líquido: R$%2.2f\n",sl);
    system("PAUSE");

return 0;
}

