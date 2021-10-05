#include <stdio.h>
#include <stdlib.h>
#include "LeerAlfa.h"

int LeerEntero(char *sCadena){
	
	int eNumero;
	
	do{
		
		printf("\nIngrese una cadena: ");
		fflush(stdin);
		gets(sCadena);
		
		if(LeerAlfa(sCadena) != 0){
			
			printf("Cadena inv%clida", 160);
			
		}
		
	}while(LeerAlfa(sCadena) != 0);
	
	eNumero = atoi(sCadena);
	
	return eNumero;
}


