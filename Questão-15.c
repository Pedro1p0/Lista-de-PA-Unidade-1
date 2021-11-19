

int comparar(float *a, float *b){
	float aux;
	if(a<b){
    return 0;
	} else {
	return 1;
	}
}
void modqsort(int n,float *vet,int(*comparar)(float*,float*)){
int i,j;
float t;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(vet[j]> vet[j+1]){
                t=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf(" %f",vet[i]);
		}
}


int main(void)
{
    float *x;
    int n;
    printf("digite a quantidade de numeros a serem ordenados \n");
    scanf("%d",&n);
    x=malloc(n*sizeof(float));
    printf("digite os valores que vao ordenados \n");
    for(int i=0; i<n; i++)
    {
        scanf("%f", &x[i]);
    }
    modqsort(n,x,comparar);
    free(x);
    return 0;
}
