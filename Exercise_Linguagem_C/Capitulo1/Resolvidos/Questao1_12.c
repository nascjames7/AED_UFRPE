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
  int numberOne, numberTwo, maior, menor, contador = 0;
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
    menor = numberTwo;
  }else {
    maior = numberTwo;
    menor = numberOne;
  }
  printf ("maior: %d\n", maior);
  printf ("menor: %d\n", menor);
  //Declaração dos vetores.
  int divisores[maior], restos[maior];  
  //Implementação do laço para inicialização dos vetores.
  for (int i = 0; i < maior; i++) {
    divisores[i] = 0;
    restos[i] = 0;
  } 
  //Declaração dos 2 primeiros campos do vetor de divisores.
  divisores[0] = maior;
  divisores[1] = menor;  
  //Implementação do laço para preenchimento dos vetores.
  for (int i = 2; i < maior; i++) {
    divisores[i] = (maior%menor);
    restos[i - 2] = divisores[i];//restos[0]
    contador++; 
    //Condição de parada.
    if (divisores[i] == 0) {
        i = maior;
    }
    //Redefinição dos divisor e dividendo.
    maior = menor;
    menor = divisores[i];   
  }
  //Impressão dos divisores e restos.
  for (int i = 0; i < (contador - 1); i++) {
    printf ("divisor %d: %d\n", i, divisores[i]);
    printf ("resto %d: %d\n", i, restos[i]);
  }
  //Impressão do último divisor
  printf ("O MDC entre %d e %d eh: %d\n", divisores[0], divisores[1], divisores[contador]);
  return 0;
}