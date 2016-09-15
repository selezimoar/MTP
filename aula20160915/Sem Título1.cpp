#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RECEBE(c,p) \
({printf("Entre com a coordanada x do ponto %s", c); \
scanf("%f", &p.x); \
printf("Entre com a coordanada y do ponto %s", p); \
scanf("%f", &p.y); })

#define MOSTRA(p) \
({  printf("(%g ; %g)", p.x, p.y);   })

#define SOMA(a,b,s) \
({s.x = a.x + b.x; \
  s.y = a.y + b.y; })
  
#define DISTANCIA(a,b) \
sqrt(pow(a.x-b.x,2.0) + pow(a.y-b.y, 2.0))
  
  


struct Ponto{
	float x,y,s;
	
}; 

int main()
{
	struct Ponto A, B, S;
	float distancia;
	RECEBE("A", A); RECEBE("B", B);
	SOMA(A,B,S);	
	MOSTRA (S);
	distancia=DISTANCIA(A,B);
	printf("A distancia entre eles sao: %g", distancia);
	
	return 0;
}
