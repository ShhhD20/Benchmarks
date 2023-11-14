#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
	int num, elemento;
	int primero, ultimo, mitad;
	srand(time(NULL));
	
	printf("De que tamagno quieres la lista?: ");
	scanf("%d", &num); 
	int lista[num];
	
	printf("Elementos de la lista\n");
	for(int i = 0; i < num; i++){
		printf(" %d", lista[i]);
	}
	printf("\nElemento a buscar: ");
	scanf("%d", &elemento);
	primero =0;
	ultimo = num - 1;
	mitad = (primero + ultimo) / 2;
	
	while(primero <= ultimo){
		if(lista[mitad] < elemento){
			primero = mitad + 1;
		}
		else if(lista[mitad] == elemento){
			printf("Posicion: %d\n", mitad+1);
			bandera = 1;
			break;
		}
		else{ultimo = mitad-1;}
		mitad = (primero+ultimo) / 2;
	}
	if(bandera == 0){
		printf("Elemento no encontrado");
	}
	return 0;
}
