#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char letra;
	float x;
	float y;
}Ponto;

Ponto setPonto();
void getPonto(Ponto p);
void setPontoPonteiro(Ponto* p);

int main(){
	Ponto p1, p2;
	
	p1 = setPonto();
	getPonto(p1);
	
	setPontoPonteiro(&p2);
	getPonto(p2);
			
	return 0;
}

Ponto setPonto(){
	Ponto p;
	printf("Informe as coordenadas do ponto(x,y) digitando letra x y: ");
	scanf("%c %f %f", &p.letra, &p.x, &p.y);
	return p;
}

void getPonto(Ponto p){
	printf("%c(%.2f,%.2f)\n", p.letra, p.x, p.y);
}

void setPontoPonteiro(Ponto *p){
	printf("Informe as coordenadas do ponto(x,y) digitando letra x y: ");
	scanf(" %c %f %f", &p->letra, &p->x, &p->y);
}

