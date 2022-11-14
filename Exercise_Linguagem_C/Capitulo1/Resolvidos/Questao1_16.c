/**
<h1>Questao1_16</h1>
* Dado um número natural na base binária, transforma para a base decimal. 
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
  int  decimal = 0, numberBinario = 0;
  char palavraBinaria[30];
  //Solicitação e leitura dos números.
  //Solicitação e leitura dos bits.
    printf ("Digite o numero: ");
    scanf ("%s", palavraBinaria);         
  //Implementação do laço para o cálculo do número decimal.
  for (int i = 0; i < strlen(palavraBinaria); i++) {       
    //Implementação das condições para transformar o caracter da Tabela ASCII em binário.
    if ((int)palavraBinaria[i] == 48) {
      numberBinario = 0;
    } else if ((int)palavraBinaria[i] == 49) {
      numberBinario = 1;
    } 
    decimal += numberBinario*pow(2, strlen(palavraBinaria) - 1 - i);    
  }
  printf ("O numero decimal: %d\n", decimal);
  return 0;
}