#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

	struct CAD{
		char nome[256];
		int idade;
		int tel;
	}cadastro[MAX];

int main()
{
	int op,i, qtd=0, opc;
    struct CAD cad;
	
	
	printf("1 - Cadastrar");
	printf("\n2 - Lista de nomes");
	printf("\n3 - Lista de idades");
	printf("\n4 - Lista de telefones");	
	printf("\n0 - Para sair");
	printf("\nDigite a opcao desejada:");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1 :
		while(opc!=5){
		
		printf("\n5 - para voltar ao Menu:\n6 - Para cadastrar cliente:");
		scanf("%d", &opc);
		fflush(stdin);
		printf("Nome do cliente: ");
		scanf("%c", &cad.nome);
		fflush(stdin);
		printf("\nIdade do cliente: ");
		scanf("%d", &cad.idade);
		fflush(stdin);
		printf("\nTelefone do cliente: ");
		scanf("%d", &cad.tel);
		fflush(stdin);
		qtd++;
		}
				
		case 2 :
		for(i=0; i< qtd; i++)
		printf("Lista de nomes\n  %c", cad.nome);
		
		case 3 :
		for(i=0; i< qtd; i++)
		printf("Lista de idades\n  %d", cad.idade);
		
		case 4 :
		for(i=0; i< qtd; i++)
		printf("Lista de telefones\n  %d", cad.tel);
		
		case 0: break;
		
	}
	
	return 0;
	
}
