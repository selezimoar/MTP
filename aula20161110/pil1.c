#include <stdio.h>
#define MAXPILHA 10
typedef char DADO;
typedef struct Pilha_ {
	int idtopo;
	DADO dados[MAXPILHA];
}Pilha;
void push(Pilha * ppilha, DADO elemento);
void pop(Pilha * ppilha);
DADO top(Pilha pilha);
int empty(Pilha pilha);
int main ()
{
	int i;
	Pilha pilha;
	pilha.idtopo = -1; //pilha vazia
	
	printf("Push: ");
	for(i=0; i<5; i++)
	{
		
		push(&pilha, 'A' + i);
		printf("%c", top(pilha));
	}
	printf("\nPOP:  ");
	while(!empty(pilha))	
	{
		printf("%c ", top(pilha));
		pop(&pilha);
	}
	printf("\n");	
	for(i=0;i<MAXPILHA+1;i++)
	{
		push(&pilha, 'A'+i);
		printf("%c", top(pilha));
	}
	return 0;
}
void push(Pilha * ppilha, DADO elemento)
{
	if(ppilha->idtopo+1 < MAXPILHA)
	{
		ppilha->idtopo++;
		ppilha->dados[ppilha->idtopo] = elemento;
	}
	else
	fprintf(stderr, "\nERROR :::: Estouro de pilha!\n");
}
void pop(Pilha * ppilha)
{
	if(ppilha->idtopo >=0)
	{
		ppilha->dados[ppilha->idtopo] = 0x0;//limpando a linha, OPCIONAL
		ppilha->idtopo--;
	}
	else
	fprintf(stdout, "\nWARNING :::: Pilha Vazia!\n");
}
DADO top(Pilha pilha)
{
	return pilha.dados[pilha.idtopo];
	
}
int empty(Pilha pilha)
{
	return (pilha.idtopo == -1);
}

