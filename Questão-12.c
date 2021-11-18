#include <stdio.h>
#include <stdlib.h>

/*
basicamente ponteiros são imporantes porque na hora
de modificar variaveis recebidas pela função main em outra função auxiliar, elas serão
alteradas em seus endereços de memória e não apenas em uma variavel
provisória criada pela função, já que quando a execução da função finaliza essa variavel provisória é apagada, 
o que pode causar o não funcionamento daquela função como planejado,
por exemplo, irei criar uma função que adiciona
10 no valor de uma variavel, se a variavel for passada sem o uso de ponteiros
ela será alterada na função no entanto logo que a função acaba a sua execução ela
será apagada, com a modificação na variavel da função principal nunca existindo, só que
quando passamos por ponteiro a função altera no endereço da variavel, assim mesmo quando a função
acaba de executar, a sua tarefa foi concluida e a variavel da função principal foi alterada. 
o que torna a linguagem muito flexivel podendo alterar valores diretamente em seus endereços de memória.
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
    soma10(&x);
    printf(" \n retornando para a funcao principal temos que o valor foi alterado %d",x);
        return 0;
}
