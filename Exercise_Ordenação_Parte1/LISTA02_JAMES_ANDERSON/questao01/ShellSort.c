/**
<h1>ShellSort</h1>
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

/* Function to sort an array using insertion sort*/
void shellSort(int vetor[], int tamanhoOriginal) {
  //Rearranja elemento em intervalos do tipo: n/2, n/4, n/8....
  for (int intervalo = tamanhoOriginal/2; intervalo > 0; intervalo /= 2) {
    for (int i = intervalo; i < tamanhoOriginal; i++) {
        int auxiliar = vetor[i];
        int j;
        for (j = i; j >= intervalo && vetor[j - intervalo] > auxiliar; j-= intervalo) {
            vetor[j] = vetor[j - intervalo];
        }
        vetor[j] = auxiliar; 
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
  shellSort(vetor, tamanhoOriginal);
  printArray(vetor, tamanhoOriginal);

  return 0;
}