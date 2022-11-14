/**
<h1>Questao1_17</h1>
* Dado um número natural na base decimal, transforma para a base binária. 
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 13/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main () 
{
  //Declaração das variáveis.
  int  decimal, quociente = 2, contador = 0;  
  //Solicitação e leitura dos números.  
  printf ("Digite o numero: ");  
  scanf ("%d", decimal);
  int numeroBinario[decimal];         
  //Implementação do laço para o cálculo do número binário.
  if (quociente >= 2) {
    printf ("aqui");
    //Resto da divisão por 2.
    int resto = decimal%2;
    //Divisão por 2.
    quociente = (decimal/2);
    numeroBinario[contador] = resto;
    contador++;
  }
  //Impressão do número binário.
  printf ("O numero binario: ");
  for (int i = 0; i < contador; i++) {
    printf ("%d", numeroBinario[contador - 1 - i] );
  }  
  return 0;
}