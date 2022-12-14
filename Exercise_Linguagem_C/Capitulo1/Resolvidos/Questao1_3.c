/**
<h1>Questao1_3</h1>
* Dado n, imprime os n primeiros numeros ímpares positivos.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 09/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int tamanhoLista;
int contador = 0;
//Solicitação e leitura do número de elementos da lista.
printf ("Digite o numero de elementos da lista: ");
scanf ("%d", &tamanhoLista);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (tamanhoLista <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o numero de elementos da lista: ");
    scanf ("%d", &tamanhoLista);
}
//Implementação do laço para impressão os inteiros ímpares.
for (int posicao = 1; posicao < (2*tamanhoLista); posicao++) {
    //Implementação da condição para impressão dos numeros.
    contador++;
    if (posicao%2 == 1 && contador < tamanhoLista) {
        printf ("%d,", posicao);
    }else if(posicao%2 == 1 && contador == tamanhoLista) { 
        printf ("%d.", posicao); 
    }            
}
return 0;
}

