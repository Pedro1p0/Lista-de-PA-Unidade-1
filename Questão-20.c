#include "gc.h"
#include <stdio.h>
#include <stdlib.h>
int impressao(){
	int *var;
	var = malloc(sizeof(int));
	*var = 30;
	printf("Var com Malloc = %p \n", var);
	free(var);
	return 0;
}
int impressaoGC(){
	int *var;
	var = GC_malloc(sizeof(int));
	*var = 42;
	printf("Variavel com GC_malloc = %p \n", var);
	GC_free(var);
	return 0;
}
int main(){
	clock_t tempo1, tempo2, temp;
	temp = clock();
	impressao();
	tempo1=clock()-temp;
	temp = clock();
	impressaoGC();
	tempo2=clock()-temp;
	printf("Tempo da impressão com Malloc e Free = %d \n", tempo1);
	printf("Tempo da impressão com GC_Malloc e GC_Free = %d \n", tempo2);
}
