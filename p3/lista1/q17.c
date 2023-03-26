/*
 Fun��o :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observa��es:
*/

#include<stdio.h>

int fatorial(int numero){
   int i, fatorial ;

   if (numero <= 1){
   		return 1;
   }

   fatorial = 1 ;
   for (i=2; i <= numero; i++){
		fatorial *= i ;
   }
    
   return fatorial ;
}

int converteGrauRadiano(float nArranjos, float rObjetos){
	return fatorial(nArranjos) / (nArranjos - rObjetos) ;
}
