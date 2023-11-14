#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	clock_t tic = clock();
	int ans;
	int pos, temp;
	srand(time(NULL));
	
	printf("De que tamagno quieres el arreglo?: ");
	scanf("%d", &ans);
	
	printf("Lista sin ordenar:\n");
	int arreglo[ans];
	for(int a = 0; a < ans; a++){
		arreglo[a] = rand() % 10000 + 1;
		printf(" %d", arreglo[a]);
	}
	
	printf("\nLista ordenada:\n");
	for(int b = 0; b < ans; b++){
		pos = b;
		for(int c = b + 1; c < ans; c++){
			if(arreglo[pos] > arreglo[c]) 
			pos = c;
		}
		if(pos != b){
			temp = arreglo[b];
			arreglo[b]= arreglo[pos]; 
			arreglo[pos] = temp;
		}
		printf(" %d", arreglo[b]);
	}
	
	clock_t toc = clock();
	printf("\nElapsed: %f secondes\n", (double)(toc-tic) / CLOCKS_PER_SEC);
	return 0;
}
