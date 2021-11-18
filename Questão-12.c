#include <stdio.h>
#include <stdlib.h>

/*
basicamente ponteiros são imporantes para funções porque na hora
de modificar variaveis recebidas pela função main, elas serão
alterados em seus endereços de memória e não apenas numa variavel
provisória criada pela função, o que pode causar o não funcionamento
daquela função como deveria, por exemplo, irei criar uma função que adiciona
10 no valor de uma variavel, se a variavel for passada sem o uso de ponteiros
ela será alterada na função no entanto logo que a função acabar de executar
será apagada com nada na variavel da função principal tendo sido alterado, só que
quando passamos por ponteiro a função altera no endereço da variavel, assim mesmo quando a função
acaba de executar, a sua tarefa foi concluida e a variavel da função principal foi alterada.
*/
void soma10(int *a){
int aux;
aux=*a;
*a=*a+10;
printf("somado 10 ao valor anterior %d",aux);
}


int main()
{
    int x = 30;
    printf("digite o valor de X \n");
    //scanf("%d",x);
    //somadez(x);
    //printf("o valor digitado alterado eh %d",x);
    soma10(&x);
    printf(" \n retornando para a funcao principal temos que o valor foi alterado %d",x);
        return 0;
}
