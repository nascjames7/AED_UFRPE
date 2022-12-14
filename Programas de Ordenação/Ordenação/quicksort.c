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
            printf ("%d]\n", vetor[i]);
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
    //Define auxiliar como último elemento do vetor.
    int auxiliar = vetor[tamanhoOriginal - 1];
    printf ("vetor[tamanhoOriginal - 1]: %d\n", auxiliar);
    //Define i como tamanho da partição.
    int i = tamanhoParticao;
    int j;
    printf ("tamanhoParticao: %d\n", i);
    //Implementação do laço para realizar a ordenação.
    for (j = (tamanhoParticao + 1); j < tamanhoOriginal; j++) {
      printf ("j: %d\n", j);
      //Implementação da condição para realizar a troca.
        if (vetor[j] < auxiliar) {
            //Incremento de i.
            printf ("i: %d\n", i);
            i++;
            printf ("i: %d\n", i);
            printf ("Antes: \nvetor[i]: %d\n", vetor[i]);
            printf ("j: %d\n", j);
            printf ("vetor[j]: %d\n", vetor[j]);
            trocar(vetor[i], vetor[j]);
            printf ("Depois: \nvetor[i]: %d\n", vetor[i]);
            printf ("vetor[j]: %d\n", vetor[j]);
        }
    }
    printf ("i: %d\n", i);
    printf ("Antes: \nvetor[i + 1]: %d\n", vetor[i]);
    printf ("j: %d\n", j);
    printf ("vetor[j]: %d\n", vetor[tamanhoOriginal]);
    trocar(vetor[i + 1], vetor[tamanhoOriginal]);
    printf ("i: %d\n", i);
    printf ("Depois: \nvetor[i + 1]: %d\n", vetor[i]);
    printf ("j: %d\n", j);
    printf ("vetor[j]: %d\n", vetor[tamanhoOriginal]);
    printf ("retorno: %d\n", i + 1);
    return (i + 1);
}

/* Function to sort an array using quicksort*/
void quickSort(int vetor[], int tamanhoParticao, int tamanhoOriginal) {
  printf ("tamanhoParticao: %d\n", tamanhoParticao);
  printf ("tamanhoOriginal: %d\n", tamanhoOriginal);
  if (tamanhoParticao < tamanhoOriginal) {    
    //Declaração da variavel quick (representa o retorno da função particionar).
    int quick = particionar(vetor, tamanhoParticao, tamanhoOriginal);
    printf ("quick: %d\n", quick);
    //Chamada recursiva do procedimento quickSort.
    printf ("Chamada recursiva para elementos antes do pivo.\n");
    quickSort(vetor, tamanhoParticao, (quick - 1));
    printf ("Chamada recursiva para elementos depois do pivo.\n");
    quickSort(vetor, (quick + 1), tamanhoOriginal);
  }
}  

/* Driver program to test insertion sort */
int main() {
  int vetor[] = {2, 8, 7, 1, 3, 5, 6, 4};
  int tamanhoOriginal = 8; //sizeof(vetor); sizeof(vetor[0]);
  printf ("Tam: %d\n", tamanhoOriginal);
  int quickInit = tamanhoOriginal/2;
  printf ("quickInit: %d\n", quickInit);

  /*int tamanhoOriginal;
  printf("Enter the size of array: ");
  scanf("%d", &tamanhoOriginal);
  int quickInit = tamanhoOriginal/2;
  printf ("quickInit: %d\n", quickInit);
  int vetor[tamanhoOriginal];
  for (int i = 0; i < tamanhoOriginal; i++) {
    vetor[i] = rand() % 100;
  }*/

  printArray(vetor, tamanhoOriginal);
  quickSort(vetor, quickInit, tamanhoOriginal);
  printArray(vetor, tamanhoOriginal);

  return 0;
}