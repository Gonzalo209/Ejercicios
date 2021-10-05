#include <stdio.h>
#include <string.h>

int LeerCadenaDeNCaracteres(char *sCadena){
	
	int eLongitud, lLogico;
	
	eLongitud = strlen(sCadena);
	
	if(eLongitud <= *sCadena){
		
		lLogico = 1;
		
	}
	
	else{
		
		lLogico = 0;
	}
	
	return lLogico;
	
}
