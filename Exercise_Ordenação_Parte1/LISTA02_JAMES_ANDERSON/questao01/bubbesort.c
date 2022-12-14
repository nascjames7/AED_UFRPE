/**
<h1>Bublesort</h1>
* Dada uma coleção de números inteiros terminada, ordena-los.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 13/12/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int tamanho, tamanhoOriginal;
//Solitação e leitura do tamanho do vetor.
printf ("Digite o tamanho do vetor: ");
scanf ("%d", &tamanhoOriginal);
tamanho = tamanhoOriginal;
int vetor[tamanhoOriginal];
//Implementação do laço para formação do vetor.
for (int i = 0; i < tamanho; i++) {
    printf ("Digite um valor inteiro para a posicao %d do vetor: ", i);
    scanf ("%d", &vetor[i]);
}
//Ordenação do vetor.
//Implementação do laço para percorrer o vetor n vezes (n = tamanho).
for (int i = 0; i < tamanho; i++) {
    //Implementação do laço para realizar a troca dos valores.
    for (int j = 0; j < (tamanho - 1); j++) {
        //Implementação da condição de troca.
        if (vetor[j] > vetor[j+1]) {
            int auxiliar = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = auxiliar;
        }
    }
    //Decremento do tamanho do vetor.
    tamanho--;
}
//Impressão do vetor ordenado.
for (int i = 0; i < tamanhoOriginal; i++) {
    if(i == 0) {
        printf ("[%d, ", vetor[i]);
    }
    if(i > 0 && i < (tamanho - 1)) {
    printf ("%d, ", vetor[i]);
    }
    if(i == (tamanho - 1)) {
        printf ("%d]", vetor[i]);
    }
}
return 0;
}