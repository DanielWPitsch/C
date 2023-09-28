// Arvore Binaria de Busca

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Nós da árvore 
struct NohArvore {
   struct NohArvore *esquerda; // ponteiro para o noh esquerdo
   int dado; 				  // dado que sera inserido 
   struct NohArvore *direita; // ponteiro para o noh direito
};

typedef struct NohArvore NohArvore; // renomeando
typedef NohArvore *NohArvorePonteiro; 

//prototipo
void inserirNoh(NohArvorePonteiro *arvorePt, int valor);
void emOrdem(NohArvorePonteiro arvorePt);

// Main
int main( void )
{
   int i; 
   int item; 
   NohArvorePonteiro raizPt = NULL; 

   srand( time( NULL ) );
   printf("Povoando a arvore!" );
   // Inserindo valores aleatohrios
   for ( i = 1; i <= 10; i++ ) {
      item = rand() % 15;
      printf( "%3d", item );
      inserirNoh( &raizPt, item );
   } 
   /* Printando em ordem */
   printf( "\n\nA sequencia em ordem eh:\n" );
   emOrdem(raizPt);
   
   printf("-Fim-\n");
   system("pause");
   return 0; 
} 


void inserirNoh(NohArvorePonteiro *arvorePt, int valor)
{
   // Estah vazia?
   if ( *arvorePt == NULL ) {
      *arvorePt = malloc(sizeof(NohArvore));

      // Criando primeiro Noh na raiz
      if (*arvorePt != NULL ) {
         (*arvorePt)->dado = valor;
         (*arvorePt)->esquerda = NULL;
         (*arvorePt)->direita = NULL;
      }
      else {
         printf( "%d nao foi inserido, pois nao ha memoria disponivel!\n", valor);
      } 
   } 
   else { 
      // Menor - Esquerda
      if (valor < (*arvorePt)->dado) {
         inserirNoh( &( (*arvorePt)->esquerda ), valor );
      }

      // Maior - Direita
      else if ( valor > (*arvorePt)->dado) {
         inserirNoh( &( (*arvorePt)->direita), valor);
      }
      else { // valor duplicado
         printf( "duplicado!\n" );
      }
   }
}

void emOrdem(NohArvorePonteiro arvorePt)
{
   // Se nao estiver vazia
   if (arvorePt != NULL) {
      emOrdem(arvorePt->esquerda);
      printf("%3d", arvorePt->dado);
      emOrdem(arvorePt->direita);
   } 
} 


