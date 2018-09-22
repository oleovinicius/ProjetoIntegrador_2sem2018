#include <stdio.h>
#include <stdlib.h>



int matriz_menu(){
    int opc = 0;
    int loop =0;


    while (loop == 0){
        printf("MENU DE MATRIZES\n" );
        printf("1-Soma\n" );
        printf("2-Subtracao\n" );
        printf("3-Produto\n" );
        printf("4-Determinante\n" );
        printf("9-Menu principal\n");
        printf("0-SAIR\n" );
        printf("Digite o numedo da sua escolha:" );
        scanf(" %d",&opc );


        switch (opc) {
            case 1:
                printf("Soma de Matrizes\n" );

            break;

            case 2:
            printf("Subtracao de Matrizes\n" );

            break;

            case 3:
            printf("Produto de Matrizes\n" );

            break;

            case 4:
            printf("Determinante de Matrizes\n" );

            break;

            case 9:
                loop =1;
                main();
            break;

            case 0:
                loop = 1;
            break;

            default:
                printf("OPCAO INVALIDA\n" );
            break;




        }







    }




    return 0;
}
