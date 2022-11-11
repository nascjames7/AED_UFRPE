/**
<h1>Questao1_17</h1>
* Dado um número natural na base decimal, transforma para a base binária. 
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
  int  decimal, numberBinario;  
  //Solicitação e leitura dos números.  
    printf ("Digite o numero: ");
    scanf ("%d", numberBinario);         
  //Implementação do laço para o cálculo do número decimal.
  
  printf ("O numero binario: %d\n", numberBinario);
  return 0;
}