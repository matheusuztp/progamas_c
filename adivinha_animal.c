#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int resposta;
    const char ESC = 27;

    printf("Este programa adivinhar� o animal escolhido.");
    printf("\n\nDesntre as op��es est�o poss�veis: ");
    printf("\n\n le�o, cavalo, homem, macaco, morcego, baleia, avestruz,");
    printf("\n  ping�im, pato, �guia, tartaruga, crocodilo e cobra.\n");
    printf("\nLembre-se: \n 1-Sim. \n 2-N�o.\n\n");

do{

        printf("� mam�fero?");
        scanf("%i",&resposta);

 switch(resposta)
    {
  case 1: printf("\n� quadrupede?");
        scanf("%i",&resposta);
        switch(resposta)
        {
            case 1: printf("\n� Carn�voro?");
            scanf("%i",&resposta);
                switch (resposta)
                {
                    case 1: printf("\nSeu animal � o Le�o!");
                    break;
                    case 2: printf("\n� herb�voro?");
                    scanf("%i",&resposta);
                        switch (resposta)
                            {
                            case 1: printf("\nSeu animal � o Cavalo!");
                            break;
                            case 2: printf("\nAlgo est� errado! Recomece!");
                            break;
                            default:
                                printf("\nERRO\n");
                            }
                     break;
                }
            break;

            case 2: printf("\n� B�pede?");
            scanf("%i",&resposta);
                switch (resposta)
                {
                    case 1: printf("\n� On�voro?");
                    scanf("%i",&resposta);
                        switch (resposta)
                        {
                            case 1: printf("\nSeu animal � o Homem!");
                            break;
                            case 2: printf("\n� Frut�fero?");
                            scanf("%i",&resposta);
                                switch (resposta)
                                {
                                    case 1: printf("\nSeu animal � o Macaco!");
                                    break;
                                    case 2: printf("\nAlgo est� errado! Recomece!");
                                    break;
                                    default:
                                        printf("\nERRO\n");
                                }
                            break;
                        }
                        break;
                    case 2: printf("\n� voador?");
                    scanf("%i",&resposta);
                        switch (resposta)
                        {
                            case 1: printf("\nSeu animal � o morcego!");
                            break;
                            case 2: printf("\n� aqu�tico?");
                            scanf("%i",&resposta);
                                switch(resposta)
                                {
                                    case 1: printf("\nSeu animal � Baleia");
                                    break;
                                    case 2: printf("\nAlgo est� errado! Recomece!");
                                    break;
                                    default: printf("\nERRO\n");
                                }
                            break;
                        }
                    break;
                }
            break;
        }
        break;


            case 2: printf("\n� uma Ave?");
            scanf("%i",&resposta);
                    switch(resposta)
                    {
                        case 1: printf("\n� uma ave que n�o voa?");
                        scanf("%i",&resposta);
                            switch(resposta)
                            {
                                case 1: printf("\n� tropical?");
                                scanf("%i",&resposta);
                                    switch(resposta)
                                    {
                                        case 1: printf("\nSeu animal � um Avestruz!");
                                        break;
                                        case 2: printf("\n� Polar?");
                                        scanf("%i",&resposta);
                                            switch (resposta)
                                            {
                                                case 1: printf("\nSeu animal � o Pinguim!");
                                                break;
                                                case 2: printf ("\nAlgo est� errado! Recomece!");
                                                break;
                                                default: printf ("\nERRO\n");
                                            }
                                        break;
                                    }
                                    break;
                                case 2: printf("\n� uma ave com nadadeiras?");
                                scanf("%i",&resposta);
                                    switch (resposta)
                                    {
                                        case 1: printf("\nSeu animal � o Pato!");
                                        break;
                                        case 2: printf("\n� uma ave de rapina?");
                                        scanf("%i",&resposta);
                                            switch(resposta)
                                            {
                                                case 1: printf("\nSeu animal � uma �guia!");
                                                break;
                                                case 2: printf("\nAlgo est� errado! Recomece!");
                                                break;
                                                default: printf("\nERRO\n");
                                            }
                                        break;
                                    }
                                    break;
                            }
                            break;
                        case 2: printf("\n� um R�ptil?");
                        scanf("%i",&resposta);
                            switch(resposta)
                            {
                                case 1: printf("\nPossui casco?");
                                scanf("%i",&resposta);
                                    switch(resposta)
                                    {
                                        case 1: printf("\nSeu animal � a Tartaruga!");
                                        break;
                                        case 2: printf("\n� carn�voro?");
                                        scanf("%i",&resposta);
                                            switch(resposta)
                                            {
                                                case 1: printf("\nSeu animal � o Crocodilo!");
                                                break;
                                                case 2: printf("\nPossui patas?");
                                                scanf("%i",&resposta);
                                                    switch (resposta)
                                                    {
                                                        case 1: printf("\nAlgo est� errado! Recomece!");
                                                        break;
                                                        case 2: printf("\nSeu animal � a Cobra!");
                                                        break;
                                                        default: printf("\nERRO\n");
                                                    }
                                                break;
                                            }
                                        break;
                                    }
                                    break;
                                case 2: printf("\nERRO\n");
                                break;
                            }
                            break;
                    }
                    break;

            }


    printf("\n\nPrecione ESC para terminar.");
    printf("\n\n");
}while (getch () != ESC);
return 0;
}
