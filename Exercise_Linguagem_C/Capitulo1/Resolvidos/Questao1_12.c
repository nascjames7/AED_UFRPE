/**
<h1>Questao1_12</h1>
* Dados dois números inteiros positivos, vdetermina o máximo divisor
* comum entre eles, usando o algoritmo de euclides.
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
  int numberOne, numberTwo, maior;
  //Solicitação e leitura dos números.
  printf ("Digite o primeiro numero: ");
  scanf ("%d", &numberOne);
  /**Implementação de condição para requerer um novo valor 
  * caso o número passado seja inválido.
  */
  while (numberOne <= 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite o primeiro numero: ");
    scanf ("%d", &numberOne);        
  } 
  printf ("Digite o segundo numero: ");
  scanf ("%d", &numberTwo);
  /**Implementação de condição para requerer um novo valor 
  * caso o número passado seja inválido.
  */
  while (numberTwo <= 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite o segundo numero: ");
    scanf ("%d", &numberTwo);        
  }
  //Verificação do maior valor entre os números dados.
  if (numberOne > numberTwo) {
    maior = numberOne;
  }else maior = numberTwo;
  //Declaração dos vetores.
  int divisores[maior], restos[maior];       
  return 0;
}