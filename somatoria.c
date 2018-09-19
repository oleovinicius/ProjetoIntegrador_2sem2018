#include <stdio.h>
#include <stdlib.h>



int somatoria_menu(){
    int opc = 0;
    int loop =0;
    int aux = 0;

    while (loop == 0){

        printf("TESTE\n");
        printf("1-SAIR\n");
        scanf("%d",&opc);


       switch (opc){
        case 1:
            printf("Fim teste");
            loop = 1;
        break;
    
    default:
        printf("OPCAO INCORRETA");
    break;

    }


    }




    return 0;
}
