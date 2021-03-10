#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int resposta;
    const char ESC = 27;

    printf("Este programa adivinhar· o animal escolhido.");
    printf("\n\nDesntre as opÁıes est„o possÌveis: ");
    printf("\n\n le„o, cavalo, homem, macaco, morcego, baleia, avestruz,");
    printf("\n  ping¸im, pato, ·guia, tartaruga, crocodilo e cobra.\n");
    printf("\nLembre-se: \n 1-Sim. \n 2-N„o.\n\n");

do{

        printf("… mamÌfero?");
        scanf("%i",&resposta);

 switch(resposta)
    {
  case 1: printf("\n… quadrupede?");
        scanf("%i",&resposta);
        switch(resposta)
        {
            case 1: printf("\n… CarnÌvoro?");
            scanf("%i",&resposta);
                switch (resposta)
                {
                    case 1: printf("\nSeu animal È o Le„o!");
                    break;
                    case 2: printf("\n… herbÌvoro?");
                    scanf("%i",&resposta);
                        switch (resposta)
                            {
                            case 1: printf("\nSeu animal È o Cavalo!");
                            break;
                            case 2: printf("\nAlgo est· errado! Recomece!");
                            break;
                            default:
                                printf("\nERRO\n");
                            }
                     break;
                }
            break;

            case 2: printf("\n… BÌpede?");
            scanf("%i",&resposta);
                switch (resposta)
                {
                    case 1: printf("\n… OnÌvoro?");
                    scanf("%i",&resposta);
                        switch (resposta)
                        {
                            case 1: printf("\nSeu animal È o Homem!");
                            break;
                            case 2: printf("\n… FrutÌfero?");
                            scanf("%i",&resposta);
                                switch (resposta)
                                {
                                    case 1: printf("\nSeu animal È o Macaco!");
                                    break;
                                    case 2: printf("\nAlgo est· errado! Recomece!");
                                    break;
                                    default:
                                        printf("\nERRO\n");
                                }
                            break;
                        }
                        break;
                    case 2: printf("\n… voador?");
                    scanf("%i",&resposta);
                        switch (resposta)
                        {
                            case 1: printf("\nSeu animal È o morcego!");
                            break;
                            case 2: printf("\n… aqu·tico?");
                            scanf("%i",&resposta);
                                switch(resposta)
                                {
                                    case 1: printf("\nSeu animal È Baleia");
                                    break;
                                    case 2: printf("\nAlgo est· errado! Recomece!");
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


            case 2: printf("\n… uma Ave?");
            scanf("%i",&resposta);
                    switch(resposta)
                    {
                        case 1: printf("\n» uma ave que n„o voa?");
                        scanf("%i",&resposta);
                            switch(resposta)
                            {
                                case 1: printf("\n… tropical?");
                                scanf("%i",&resposta);
                                    switch(resposta)
                                    {
                                        case 1: printf("\nSeu animal È um Avestruz!");
                                        break;
                                        case 2: printf("\n… Polar?");
                                        scanf("%i",&resposta);
                                            switch (resposta)
                                            {
                                                case 1: printf("\nSeu animal È o Pinguim!");
                                                break;
                                                case 2: printf ("\nAlgo est· errado! Recomece!");
                                                break;
                                                default: printf ("\nERRO\n");
                                            }
                                        break;
                                    }
                                    break;
                                case 2: printf("\n… uma ave com nadadeiras?");
                                scanf("%i",&resposta);
                                    switch (resposta)
                                    {
                                        case 1: printf("\nSeu animal È o Pato!");
                                        break;
                                        case 2: printf("\n… uma ave de rapina?");
                                        scanf("%i",&resposta);
                                            switch(resposta)
                                            {
                                                case 1: printf("\nSeu animal È uma ¡guia!");
                                                break;
                                                case 2: printf("\nAlgo est· errado! Recomece!");
                                                break;
                                                default: printf("\nERRO\n");
                                            }
                                        break;
                                    }
                                    break;
                            }
                            break;
                        case 2: printf("\n… um RÈptil?");
                        scanf("%i",&resposta);
                            switch(resposta)
                            {
                                case 1: printf("\nPossui casco?");
                                scanf("%i",&resposta);
                                    switch(resposta)
                                    {
                                        case 1: printf("\nSeu animal È a Tartaruga!");
                                        break;
                                        case 2: printf("\n… carnÌvoro?");
                                        scanf("%i",&resposta);
                                            switch(resposta)
                                            {
                                                case 1: printf("\nSeu animal È o Crocodilo!");
                                                break;
                                                case 2: printf("\nPossui patas?");
                                                scanf("%i",&resposta);
                                                    switch (resposta)
                                                    {
                                                        case 1: printf("\nAlgo est· errado! Recomece!");
                                                        break;
                                                        case 2: printf("\nSeu animal È a Cobra!");
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
