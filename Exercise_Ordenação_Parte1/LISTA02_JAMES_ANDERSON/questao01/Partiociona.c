/**
<h1>Partciona</h1>
* Dada uma coleção de números inteiros terminada, ordena-los.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 15/12/2022
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
void trocar(int vetor[], int first, int second) {
    int guarda = vetor[first];
    vetor[first] = vetor[second];
    vetor[second] = guarda;
}

//Procedimento que realiza a partição.
int particionar(int vetor[], int quickInit, int tamanhoOriginal) {
    //Define auxiliar como último elemento do vetor.
    int tamanhoCorreto = tamanhoOriginal - 1;
    int pivo = vetor[tamanhoCorreto];
    printf ("pivo: %d\n", pivo);
    //Define i como tamanho da partição.
    int i = quickInit - 1;
    int j;    
    //Implementação do laço para realizar a ordenação.
    for (j = quickInit; j <= (tamanhoCorreto - 1); j++) {      
      //Implementação da condição para realizar a troca.
        if (vetor[j] < pivo) {            
            i++;            
            trocar (vetor, i, j);
            printf ("i: %d\n", i);
            printf ("j: %d\n", j);
            printf ("vetor[i]: %d\n", vetor[i]);
            printf ("vetor[j]: %d\n", vetor[j]);
            printArray(vetor, tamanhoOriginal);
        }
    }    
    trocar (vetor, (i + 1), tamanhoCorreto);
    printf ("i + 1: %d\n", i + 1);
    printf ("tamanhoCorreto: %d\n", tamanhoCorreto);        
    printf ("vetor[i + 1]: %d\n", vetor[i + 1]);    
    printf ("vetor[tamanhoCorreto]: %d\n", vetor[tamanhoCorreto]);
    //printArray(vetor, tamanhoOriginal); 
    printf ("retorno: %d", i + 1);   
    return (i + 1);
}

/* Function to sort an array using quicksort*/
void quickSort(int vetor[], int quickInit, int tamanhoOriginal) {  
  if (quickInit < tamanhoOriginal) {    
    //Declaração da variavel quick (representa o retorno da função particionar).
    int quick = particionar(vetor, quickInit, tamanhoOriginal);
    printf ("quick: %d\n", quick);
    printArray(vetor, tamanhoOriginal);
    //Chamada recursiva do procedimento quickSort.    
    quickSort(vetor, quickInit, quick);    
    quickSort(vetor, (quick + 1), tamanhoOriginal);
  }
}  

/* Driver program to test insertion sort */
int main() 
{
  int vetor[] = {33, 44, 55, 77, 95, 99, 22, 25, 41, 66, 88, 89};
  int tamanhoOriginal = 12; //sizeof(vetor); sizeof(vetor[0]);
  int quickInit = 0;  
  //int quickInit = tamanhoOriginal/2;  
  //int quickInit = tamanhoOriginal - 1;
  //printf ("quickInit: %d\n", quickInit);
  /*int tamanhoOriginal;
  printf("Enter the size of array: ");
  scanf("%d", &tamanhoOriginal);
  int quickInit = tamanhoOriginal/2;
  printf ("quickInit: %d\n", quickInit);
  int vetor[tamanhoOriginal];
  for (int i = 0; i < tamanhoOriginal; i++) {
    vetor[i] = rand() % 100;
  }*/

  printf ("Tam: %d\n", tamanhoOriginal);  
  printArray(vetor, tamanhoOriginal);
  //quickSort(vetor, quickInit, tamanhoOriginal);
  particionar(vetor, quickInit, tamanhoOriginal);
  printArray(vetor, tamanhoOriginal);

  return 0;
}