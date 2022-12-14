/**
<h1>BublleSort</h1>
* Dada uma coleção de números inteiros terminada, ordena-los.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 14/12/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

// A utility function to print an array of size n
void printArray(int vetor[], int tamanhoOriginal) {
    for (int i = 0; i < tamanhoOriginal; i++) {
        if(i == 0) {
            printf ("[%d, ", vetor[i]);
        }
        if(i > 0 && i < (tamanhoOriginal - 1)) {
        printf ("%d, ", vetor[i]);
        }
        if(i == (tamanhoOriginal - 1)) {
            printf ("%d]", vetor[i]);
        }
    }
}

//Ordenação do vetor.
void bubbleSort (int vetor[], int tamanhoOriginal) {

    int tamanho = tamanhoOriginal;   
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
}

int main () 
{
  // int vetor[] = { 12, 11, 13, 5, 6 };
  // int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  int tamanhoOriginal;
  printf("Enter the size of array: ");
  scanf("%d", &tamanhoOriginal);
  int vetor[tamanhoOriginal];
  for (int i = 0; i < tamanhoOriginal; i++) {
    vetor[i] = rand() % 100;
  }

printArray(vetor, tamanhoOriginal);
bubbleSort(vetor, tamanhoOriginal);
printArray(vetor, tamanhoOriginal);

return 0;
}