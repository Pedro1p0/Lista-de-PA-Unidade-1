#include <stdio.h>
#include <stdlib.h>

void ordena (int n, float *vet)
{
    int i,j,aux;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(vet[i]<vet[j])
            {
                aux=vet[j];
                vet[j]=vet[i];
                vet[i]=aux;
            }
        }
    }
    for(i=0; i<n; i++)
    {
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
    ordena(n,x);
    return 0;
}
