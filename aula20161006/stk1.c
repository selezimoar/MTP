#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 4

void imprimeMatriz(float matriz[N][M]);
void imprimeTransposta(float matriz[N][M]);

int main()
{
	float matriz[N][M];
	int i, j;
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			printf("Entre com o elemento (%d, %d): ", i+1, j+1);
			scanf("%f", &matriz[i][j]);	
			
		}
	imprimeMatriz(matriz);
	printf("A transposta e:\n");
	imprimeTransposta(matriz);
	
	return 0;
}

void imprimeMatriz(float matriz[N][M])
{
	int i, j;
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			printf("%g%c", matriz[i][j], (j==M-1) ? '\n' : '\t');
			
		}
}
void imprimeTransposta(float matriz[N][M])
{
		int i, j;
	for(j=0; j<M; j++)
		for(i=0; i<N; i++)
		{
			printf("%g%c", matriz[i][j], (i==N-1) ? '\n' : '\t');
			
		}
	
}
