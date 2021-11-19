
void somavetores(int tam,int *vet1,int *vet2,int *vet3)
{
    for (int i=0; i<tam; i++)
    {
        vet3[i]=vet1[i]+vet2[i];
    }
    for (int i=0; i<tam; i++)
    {
        printf("%i ",vet3[i]);
    }
}



int main()
{
    int n;
    int *vet1,*vet2,*vet3;
    printf("digite o tamanho do vetor \n");
    scanf("%i",&n);
    vet1=malloc(n*sizeof(int));
    vet2=malloc(n*sizeof(int));
    vet3=malloc(n*sizeof(int));
    printf("digite o conteudo do vetor 1\n");
    for(int i=0; i<n; i++)
    {
        scanf("%i",&vet1[i]);
    }
    printf("digite o conteudo do vetor 2\n");
    for(int i=0; i<n; i++)
    {
        scanf("%i",&vet2[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%i ",vet1[i]);
    }
    printf("  \n");
    for(int i=0; i<n; i++)
    {
        printf("%i ",vet2[i]);
    }
    printf("  \n");

    somavetores(n,vet1,vet2,vet3);

    return 0;
}
