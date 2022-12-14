/**
<h1>QuickSort</h1>
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

//Procedimento de troca.
void trocar(int first, int second) {
    int temp = first;
    first = second;
    second = temp;
}


//Procedimento que realiza a partição.
int particionar(int vetor[], int tamanhoParticao, int tamanhoOriginal) {
    int auxiliar = vetor[tamanhoOriginal - 1];
    int i = tamanhoParticao;
    for (int j = (tamanhoParticao + 1); j < tamanhoOriginal; j++) {
        if (vetor[j] < auxiliar) {
            //Incremento de i.
            i++;
            trocar(vetor[i], vetor[j]);
        }
    }
    trocar(vetor[i + 1], vetor[tamanhoOriginal]);
    return (i + 1);
}

/* Function to sort an array using quicksort*/
void quickSort(int vetor[], int tamanhoParticao, int tamanhoOriginal) {
  if (tamanhoParticao < tamanhoOriginal) {
    //Declaração da variavel quick (representa o retorno da função particionar).
    int quick = particionar(vetor, tamanhoParticao, tamanhoOriginal);
    //Chamada recursiva do procedimento quickSort.
    quickSort(vetor, tamanhoParticao, (quick - 1));
    quickSort(vetor, (quick + 1), tamanhoOriginal);
  }
}  

/* Driver program to test insertion sort */
int main() {
  // int vetor[] = { 12, 11, 13, 5, 6 };
  // int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  int tamanhoOriginal;
  printf("Enter the size of array: ");
  scanf("%d", &tamanhoOriginal);
  int quickInit = tamanhoOriginal/2;
  int vetor[tamanhoOriginal];
  for (int i = 0; i < tamanhoOriginal; i++) {
    vetor[i] = rand() % 100;
  }

  printArray(vetor, tamanhoOriginal);
  quickSort(vetor, quickInit, tamanhoOriginal);
  printArray(vetor, tamanhoOriginal);

  return 0;
}