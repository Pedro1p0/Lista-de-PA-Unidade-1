#include "gc.h"
#include <stdio.h>
int main(){
	int *var;
	var = GC_malloc(sizeof(int));
	*var = 30;
	printf("Var = %p \n", var);
	GC_free(var);
	return 0;
