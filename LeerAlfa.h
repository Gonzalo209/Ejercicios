#include <stdio.h>
#include <string.h>
#include <ctype.h>

int LeerAlfa(char *sCadena){
	
	int eLongitud, eRecorre, lLogico;
	
	eLongitud = strlen(sCadena);
		
	eRecorre = 0;
	lLogico = 1;
		
	while(lLogico && sCadena[eRecorre]){
		
		if(isalpha(sCadena[eRecorre]) != 0){
				
			eRecorre++;
			
		}
		
		else{
			
			lLogico = 0;
			
		}
		
	}
	
	return lLogico;	
}
