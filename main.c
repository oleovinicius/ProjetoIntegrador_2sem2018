#include <stdio.h>
#include <stdlib.h>
#include "clearScreen.c"
#include "somatoria.c"
#include "constantes.c"
#include "logica.c"
#include "matriz.c"
#include "funcao.c"
#include "combinatoria.c"
#include "derivada.c"
#include "integral.c"


//void wait_response(void);

int main (){
	int loop = 0;
	int opc =0;
	int n1 = 0;
	int n2 = 0;
	char aux = 's';

	while (loop ==0){
		system("clear");
		printf("MARCIO CALCULATOR\n");
		printf("1-Somatoria\n");
		printf("2-Constantes\n");
		printf("3-Logica Proposicional\n");
		printf("4-Matriz\n");
		printf("5-Funcao\n");
		printf("6-Combinatoria\n");
		printf("7-Derivada Numerica\n");
		printf("8-Integral Numerica\n");
		printf("0-Sair\n");
		printf("DIGITE SUA OPCAO:");
		scanf(" %d",&opc);


		switch(opc) {
			case 1:
				somatoria_menu();
			break;

			case 2:
				constantes_menu();
			break;

			case 3:
				logica_menu();
			break;

			case 4:
				matriz_menu();
			break;

			case 5:
				funcao_menu();
			break;

			case 6:
				combinatoria_menu();
			break;

			case 7:
				derivada_menu();
			break;

			case 8:
				integral_menu();
			break;
			case 0:
				loop =1;
			break;

			default:
				printf("Opcao invalida");
			break;



		}
		//wait_response();
		printf("Digite S para SAIR, ou qualquer outra tecla para CONTINUAR!!!:");
		scanf(" %c",&aux);
		printf("%c\n",aux);

		if (aux == 's'){
			loop = 1;
		}

	}
	return 0;
}
/*
void wait_response(){
	fflush(stdin);
	getchar();
	fputs("PRESSINE ENTER PARA CONTINUAR",stdout);
	getchar();



}
*/
