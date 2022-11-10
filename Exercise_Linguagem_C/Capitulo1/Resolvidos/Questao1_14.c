/**
<h1>Questao1_14</h1>
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
  int number;
  //Solicitação e leitura dos números.
  printf ("Digite o numero: ");
  scanf ("%d", &number);
  /**Implementação de condição para requerer um novo valor 
  * caso o número passado seja inválido.
  */
  while (number <= 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite o numero: ");
    scanf ("%d", &number);        
  }   
  //Declaração do vetor.
  int fibonacci[number];
  //Declaração dos valores iniciais da sequencia.
  fibonacci[0] = 1;
  fibonacci[1] = 1;
  //Implementação das condições para encontrar o termo requerido.
  if (number == 1 || number == 2) {
    printf ("O valor do termo %d da sequencia de Fibonacci eh: %d.", number, fibonacci[number - 1]); 
  }  
  else if (number > 2) {
    //Implementação do laço para preenchimento do vetor.
    for (int i = 2; i < number; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];    
    }
    //Impressão da resposta.
  printf ("O valor do termo %d da sequencia de Fibonacci eh: %d.", number, fibonacci[number - 1]); 
  }  
  return 0;
}
    
  