/**
<h1>InsertionSortRecursivo</h1>
* Dada uma coleção de números inteiros terminada, ordena-los.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 16/12/2022
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

/* Function to sort an array using insertion sort*/
void insertionSort(int vetor[], int tamanhoOriginal) {
  int contador = 0;
  int i, key, j;
  for (i = 1; i < tamanhoOriginal; i++) {
    contador++;
    key = vetor[i];
    j = i - 1;

    /* Move elements of vetor[0..i-1], that are
      greater than key, to one position ahead
      of their current position */
    while (j >= 0 && vetor[j] > key) {
        contador++;
      //Troca das posições (j + 1 = i).
      vetor[j + 1] = vetor[j];
      //Decremento de j.
      j = j - 1;
    }
    vetor[j + 1] = key;
  }
  printf ("contador: %d", contador);
}

/* Driver program to test insertion sort */
int main() {
  //int vetor[] = { 12, 13, 14, 15, 16};
  int vetor[] = { 22, 20, 3, 2, 1};
  // int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  int tamanhoOriginal = 5;
  /*printf("Enter the size of array: ");
  scanf("%d", &tamanhoOriginal);
  int vetor[tamanhoOriginal];
  for (int i = 0; i < tamanhoOriginal; i++) {
    vetor[i] = rand() % 100;
  }*/

  printArray(vetor, tamanhoOriginal);
  insertionSort(vetor, tamanhoOriginal);
  printArray(vetor, tamanhoOriginal);  

  return 0;
}