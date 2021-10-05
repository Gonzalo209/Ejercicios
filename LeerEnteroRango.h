#include <stdio.h>
#include <stdlib.h>
#include "LeerEntero.h"

int LeerEnteroEnRango(int *eLimiteInf, int *eLimiteSup, char *sCadena){
	
	int eNumero, convertir;
		
	do{
		
		eNumero = LeerEntero(sCadena);
		
		
		if(*eLimiteInf  < eNumero && eNumero  > *eLimiteSup){
			
			printf("Tu n%cmero %d est%c fue del rango", 163, eNumero, 160);
			
		}
		
	}while(*eLimiteInf  < eNumero && eNumero > *eLimiteSup);
			
	return eNumero;		
}
