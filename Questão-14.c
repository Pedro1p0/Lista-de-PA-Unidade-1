
int comparar(const void *x,const void *y) // função comparador irá nos ajudar a determinar a ordem dos elementos
{
    return (*(int*)x-*(int*)y); // a função irá ordenar os valores de x e y em ordem crescente
}



int main()
{
    unsigned int n; // variavel que definira o tamanho do vetor
    float *vetor; // ponteiro para apontar os endereços do vetor a ser criado
    printf("digite a quantidade de numeros a serem ordenados \n"); // auxilio para o usuario
    scanf("%d",&n); // capturar o valor que o usuario determinou para ser a quantidade de numeros que serão ordenados
    vetor=malloc(n*sizeof(float)); // alocação dinamica de memoria utilizando o tamanho de n digitado pelo usuario vezes a quantidade de bytes do tipo float
    for(int i=0; i<n; i++) // for para percorrer o vetor adicionando os valores digitados pelo usuario
    {
        printf("digite os valores que vao ser ordenados \n"); // auxilio para o usuario
        scanf("%f",&vetor[i]); // capturando os valores do vetor com a ajuda do for
    }
    qsort(vetor,n,sizeof(float),comparar); // função de ordenação dos valores
    for (int i=0; i<n; i++) // for para a leitura dos dados
    {
        printf("%f\n",vetor[i]); // exibição ordenada do vetor
    }
    return 0; // retorno da função principal
}
