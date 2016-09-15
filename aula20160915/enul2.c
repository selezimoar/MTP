#include <stdio.h>

int main()
{
	int mes, op;
	printf("Digite o mes do seu aniversário");
	scanf("%d", &op);
	
	switch(op){
		
		case 1 : printf("Voce nasceu em janeiro!");
		break;
		
		case 2 : printf("Voce nasceu em fevereiro!");
		break;
		
		case 3 : printf("Voce nasceu em marco!");
		break;
		
		case 4 : printf("Voce nasceu em abril!");
		break;
		
		case 5 : printf("Voce nasceu em maio!");
		break;
		
		case 6 : printf("Voce nasceu em junho!");
		break;
		
		case 7 : printf("Voce nasceu em julho!");
		break;
		
		case 8 : printf("Voce nasceu em agosto!");
		break;
		
		case 9 : printf("Voce nasceu em setembro!");
		break;
		
		case 10 : printf("Voce nasceu em outubro!");
		break;
		
		case 11 : printf("Voce nasceu em novembro");
		break;
		
		case 12 : printf("Voce nasceu em dezembro!");
		break;
		
		default : printf("Mes invalido!");
		
		
		
	}
}
