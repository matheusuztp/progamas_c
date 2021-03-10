#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    int senha, contador;
    const char ESC = 27;

do{

    for (contador = 0; contador < 3; contador ++){
        printf("Digite a senha: ");
        scanf("%i",&senha);
        if (senha <= 0){
            printf("\n\nSENHA INVÁLIDA!");
            break;
        }
            else if (senha == 4531){
                printf("\n\nSENHA CORRETA!");
                break;
            }
                else {
                    printf("\n\nACESSO NEGADO!!");
                    printf("\n\nTentativa %i/3", contador + 1);
                    printf("\n\n");

                }
    }
printf("\n\nPrecione ESC para terminar.");
printf("\n");
} while(getch() != ESC);
return 0;
}
