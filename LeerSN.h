#include <stdio.h>

int LeerSN(char *cCaracter){
	
	int lLogico;
	
	if(*cCaracter == 'S'){
		
		lLogico = 1;
		
	}
	
	else{
		
		if(*cCaracter == 'N'){
			
			lLogico = 0;
		}
		
	}
	
	return lLogico;
}
