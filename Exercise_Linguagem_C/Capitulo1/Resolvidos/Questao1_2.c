/**
<h1>Questao1_2</h1>
* Dado n, calcula a soma dos n primeiros numeros inteiros positivos.
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
int soma = 0;
//Solicitação e leitura do número de elementos da lista.
printf ("Digite o numero de elementos da lista: ");
scanf ("%d", &tamanhoLista);
/**Implementação de condição para requerer um novo valor 
 * caso o número passado seja inválido.
 */
while (tamanhoLista <= 0) {
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
    //Implementação da condiçaõ para garantir que o número seja positivo.
    while (lista[posicao] <= 0) {
        printf ("O numero informado nao eh valido. Por favor, inserir valor positivo.\n");
        printf ("Digite um valor de posicao %d para a lista: ", posicao+1);
        scanf ("%d", &lista[posicao]);
    }
}
//Implementação do laço para impressão dos quadrados da lista de inteiros.
for (int posicao = 0; posicao < tamanhoLista; posicao++) {
    //Soma os valores da lista.
    soma += lista[posicao];          
}
//Impressão da soma.    
printf ("A soma dos valores da lista: %d", soma);  
return 0;
}

