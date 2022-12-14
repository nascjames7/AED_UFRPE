/**
<h1>SelectionSort</h1>
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

void troca(int vetor, int *j, int *valorMinimo) {
    int auxiliar = vetor[j];
    vetor[j] = vetor[valorMinimo];
    vetor[valorMinimo] = auxiliar;
}

/* Function to sort an array using insertion sort*/
void selectionSort(int vetor[], int tamanhoOriginal) {
  int i, j, valorMinimo;
  for (int i = 1; i < tamanhoOriginal; i++) {
    valorMinimo = i;
    for (int j = i + 1; j <= tamanhoOriginal; j++) {
        if (vetor[j] < vetor[valorMinimo]) {
            valorMinimo = j;
            int auxiliar1 = &vetor[i];
            int auxiliar2 = &vetor[valorMinimo];
            
            //printf ("Aqui");
            //troca(vetor, j, valorMinimo);
            //printf ("Sai");
        }
    }
  }
}  


/* Driver program to test insertion sort */
int main() {
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
  selectionSort(vetor, tamanhoOriginal);
  printArray(vetor, tamanhoOriginal);

  return 0;
}