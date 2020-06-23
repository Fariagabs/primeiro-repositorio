#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	int opcao, valor; 
	
	printf(" Qual valor deseja doar?\n Escolha alguma das opcoes abaixo:\n");
	printf(" 1 - para doar 10 pila\n");
	printf(" 2 - para doar 25 pila\n");
	printf(" 3 - para doar 50 pila\n");
	printf(" 4 - para doar outro valor\n");
	printf(" 5 - para nao doar\n");
	printf("\n digite a opcao desejada: ");
    scanf("%d", &opcao);
    
    switch(opcao)
	{
    	case 1:
    		valor=10;
    	break;
    	
    	case 2:
    		valor=25;
    	break;
    	    
    	case 3:
    		valor=50;
    	break;
    	
    	case 4:
    		printf("\ndigite o valor desejado: ");
    		scanf("%d", &valor);
    	break;
    	
    	case 5:
    		system("cls");
    		valor = 0;
    		printf("\nLarga de ser mao de vaca");
    	break;
    	
    	default:
			printf("\nopcao nao encontrada");
    		
    	}
    	
		printf("\nVoce doou %d conto", valor);
    	
    	
	}
    

