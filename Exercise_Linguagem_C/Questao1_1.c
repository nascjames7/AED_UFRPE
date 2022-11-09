/**
<h1>Questao1_1</h1>
* Dada uma coleção de números inteiros terminada por 0, imprime seus quadrados.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 08/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int tamanhoLista;
//Solicitação e leitura do número de elementos da lista.
printf ("Digite o numero de elementos da lista: ");
scanf ("%d", &tamanhoLista);
//Implementação de condição para requerer um novo valor caso o número passado seja inválido.
while (tamanhoLista < 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o numero de elementos da lista: ");
    scanf ("%d", &tamanhoLista);
}
//Declaração do array.
int lista[tamanhoLista];
//Implementação do laço para preenchimento da lista de inteiros.
for (int posicao = 0; posicao < tamanhoLista; posicao++) {    
    printf ("Digite um valor de posicao %d para a lista: ", posicao + 1);
    scanf ("%d", &lista[posicao]);
}
//Implementação do laço para impressão dos quadrados da lista de inteiros.
for (int posicao = 0; posicao < tamanhoLista; posicao++) {
    //Calcula o quadrado do valor na posicao especificada.
    int valorQuadrado = pow(lista[posicao],2);
    //Impressão dos quadrados dos valores da lista.
    printf ("Valor %d: %d \n", posicao + 1,  valorQuadrado);    
}
return 0;
}

