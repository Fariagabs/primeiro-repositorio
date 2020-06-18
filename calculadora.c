#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	//variaveis
	
	int opcao;
	float primeiroNumero, segundoNumero, resultado;
	
	printf("\r\nCalculadora\r\n");
	
	printf("\r\nSelecione uma das opções");
	printf("\r\n1 - Soma\r\n");
	printf("\r\n2 - Subtração\r\n");
	printf("\r\n3 - Multiplicação\r\n");
	printf("\r\n4 - Divisão\r\n");
	
	printf("\r\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	
	printf("\r\nDigite o primeiro número: ");
	scanf("%f", &primeiroNumero);
	
	printf("\r\nDigite o segundo número: ");
	scanf("%f", &segundoNumero);
	
	switch(opcao){
		case 1:
			resultado = primeiroNumero + segundoNumero;
			break;
			
		case 2:
			resultado = primeiroNumero - segundoNumero; 
			break;
			 
		case 3:
			resultado = primeiroNumero * segundoNumero;
			break;
			
		case 4:
			if (segundoNumero == 0){
				return 0;
			}
		
			resultado = primeiroNumero / segundoNumero;
			break;
		
		default:
			printf("\r\n4A opção digitada não é válida!");
		    return 0;
			
	}
	
    printf("\r\nO resultado da sua operação é: %.2f", resultado);
}

