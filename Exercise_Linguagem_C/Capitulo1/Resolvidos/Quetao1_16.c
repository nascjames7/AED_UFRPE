/**
<h1>Questao1_16</h1>
* Dado um número natural na base binária, transforma para a base decimal.* 
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 10/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
  int number, binario[30], decimal = 0, contador = 0;
  //Solicitação e leitura dos números.
  do {
    //Solicitação e leitura dos bits.
    printf ("Digite o numero: ");
    scanf ("%d", &number);
    //Implementação de condição para ser guardado no array.
    if (number == 0 || number == 1) {
        binario[contador] = number;
        contador++; 
    }
  //Condição de parada.
  } while (number == 0 || number == 1);     
  //Implementação do laço para o cálculo do número decimal.
  for (int i = 0; i < contador; i++) {
    //Chamada recursiva.
    decimal += binario[contador - i]*pow(i,2);
  }
  printf ("O numero decimal: %d", decimal);
  return 0;
}