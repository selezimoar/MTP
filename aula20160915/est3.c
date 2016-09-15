#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

	struct CAD{
		char nome[256];
		int idade;
		int tel;
	};

int main()
{
	int op,i, qtd=0, opc, *p;
    struct CAD cad[MAX];
    op=1;
    while(op!=0)
	{	
	printf("\n\n1 - Cadastrar");
	printf("\n2 - Lista de nomes");
	printf("\n3 - Lista de idades");
	printf("\n4 - Lista de telefones");	
	printf("\n0 - Para sair");
	printf("\nDigite a opcao desejada:");
	scanf("%d", &op);
	
	
	
	switch(op)
	{
		case 1 :
		while(opc!=9)
		{			
		printf("Nome do cliente: ");
		scanf("%s", &cad[qtd].nome);
		printf("\nIdade do cliente: ");
		scanf("%d", &cad[qtd].idade);
		printf("\nTelefone do cliente: ");
		scanf("%d", &cad[qtd].tel);
		qtd++;
		printf("\n9 - Voltar menu: \n8 - Continuar cadastro: ");
		scanf("%d", &opc);
		}
		opc=10;		
		case 2 :
		printf("Lista de nomes "); 
		for(i=0; i< qtd; i++)
		{
			
			printf("\n%s", cad[i].nome);
			
		}
		printf("\n\n");
		break;
		
		case 3 :
		printf("Lista de idades");
		for(i=0; i< qtd; i++)
		{
			 
			printf("\n%d", cad[i].idade);
			
		}
		printf("\n\n");
		break;
		case 4 :
			printf("Lista de telefones"); 
		for(i=0; i< qtd; i++)
		{
			
			printf("\n%d", cad[i].tel);	
		}
		printf("\n\n");
		break;
		default : break;
	}
	
		
	}
	
	return 0;
	
}
