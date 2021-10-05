/*
	Programa: Lista1.c
	Autor: Equipo
	Fecha: 07/10/2021
	
*/

//Bibliotecas
#include <stdio.h>
#include "LeerSN.h"
#include "LeerCadena.h"
#include "LeerEnteroRango.h"
#include "margen.h"

void LeerCadena(char *, char *);

//Programa Principal
int main(){
	
	int eOpcion, eNumero, eLimiteInf, eLimiteSup;
	char cCaracter, sCadena[20];
		
	do{
		
		printf("::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("\t\tMENU DE OPCIONES\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("1. Leer Entero\n"
				"2. Leer Alfa"
				"\n3. Leer SN"
				"\n4. Leer Cadena Caracteres"
				"\n5. Leer Entero Positivo"
				"\n6. Leer Entero En Rango"
				"\n7. Leer Flotante En Rango"
				"\n8. Leer Caracter En Rango"
				"\n9. Leer Mayusculas"
				"\n10. Leer Caracter En Conjunto"
				"\n11. Leer Cadena Con Formato"
				"\n12. Leer Fecha"
				"\n13. Mensaje"
				"\n14. Escribir"
				"\n15. Error"
				"\n16. Limpiar"
				"\n17. Entero A Cadena"
				"\n18. Cadena A Flotante"
				"\n19. Margen En"
				"\n20. Margen"
				"\n21. Generar Entero"
				"\n22. Menu"
				"\n23. Salir");
		printf("\nElija una opci%cn: ", 162);
		scanf("%d", &eOpcion);		
		printf("::::::::::::::::::::::::::::::::::::::::::::\n");
		
		switch(eOpcion){
			
			case 1:
				
				printf("%d ", LeerEntero(sCadena));
				
				break;
			
			case 2:
				
					LeerCadena("la cadena", sCadena);
					
					if(LeerAlfa(sCadena) != 0){
						
						printf("%s ", sCadena);
						
					}	
					
					else{
						
						printf("Cadena no v%clida", 160);
						
					}
				
				break;
			
			case 3:
				
				do{
				
					printf("\nIngrese un caracter [S/N]: ");
					fflush(stdin);
					cCaracter = toupper(getchar());
					
					if(cCaracter != 'S' && cCaracter != 'N'){
						
						printf("Caracter inv%clido", 160);
						
					}
					
				}while(cCaracter != 'S' && cCaracter != 'N');
				
				if(LeerSN(&cCaracter) == 1){
					
					printf("El caracter es verdadero");
					
				}
				
				else{
					
					printf("El caracter es falso");
					
				}
				
				break;
			
			case 4:
				
				LeerCadena("la cadena", sCadena);
				
				if(LeerCadenaDeNCaracteres(sCadena) != 0){
					
					printf("%s", sCadena);
					
				}
				
				else{
					
					printf("No se puede imprimir la cadena");
					
				}
				
				break;
			
			case 5:
								
				printf("Ingrese el limite inferior: ");
				scanf("%d", &eLimiteInf);	
				
				printf("Ingrese el limite superior: ");
				scanf("%d", &eLimiteSup);
				
				
				printf("%d ", LeerEnteroEnRango(&eLimiteInf, &eLimiteSup, sCadena));
				
				
				
				break;
			
			case 20:
				
				Margen();	
				
				break;
			
			case 23:
				
				printf("Saliendo del sistema...");
				
				break;
			
			default: printf("Opci%cn inv%clida", 162, 160);
			
		}
		
		if(eOpcion != 23){
			
			putchar('\n');
			system("pause");
			system("cls");
			
		}
		
	}while(eOpcion != 23);
	
	
	return 0;
}

void LeerCadena(char *sMensaje, char *sCadena){
	
	printf("Ingrese %s: ", sMensaje);
	fflush(stdin);
	gets(sCadena);
	
}
