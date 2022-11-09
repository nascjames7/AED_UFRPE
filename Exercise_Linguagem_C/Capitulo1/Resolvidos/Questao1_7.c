/**
<h1>Questao1_7</h1>
* Dado n, e uma sequencia de números inteiros, determinar a soma 
*dos numeros pares.
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
*caso o número passado seja inválido.
*/
while (tamanhoLista <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o numero de elementos da lista: ");
    scanf ("%d", &tamanhoLista);
}
//Declaração do vetor.
int numeros[tamanhoLista];
//Implementação do laço para guardar a lista.
for (int posicao = 0; posicao < tamanhoLista; posicao++) {
    printf ("Digite um elemento da lista: ");
    scanf ("%d", &numeros[posicao]);                  
}
//Implementação do laço para impressão os inteiros pares.
for (int posicao = 0; posicao < tamanhoLista; posicao++) {
    //Implementação da condição para impressão dos numeros pares.    
    if (numeros[posicao]%2 == 0) {
        soma += numeros[posicao];
    }                
}
//Impressão da soma.
printf ("A soma apresenta valor de: %d", soma);
return 0;
}

