/**
<h1>Questao1_13</h1>
* Dados um número inetiro positivo, verificar se le é perfeito.* 
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
  int number, contador, resto, soma = 0;
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
  //Declaração do vetor de divisores.
  int divisor[number];   
  //Implementação do laço para preenchimento do vetor.
  for (int i = 1; i < number; i++) {
    resto = number%i;
    if (resto == 0) {
        divisor[i] = number/i;
        //Chamada recursiva;
        soma += divisor[i];
        contador++; 
    }    
  }
  //Implementação da condição para o número ser perfeito.
  if (soma == number) {
    //Impressão dos divisores.
    printf ("Os divisores são: ");
    for (int i = 0; i < contador; i++) {
        if (i < (contador - 2)) {
            printf ("%d, ", divisor[i]);
        }
        else {
            printf (" e %d. ", divisor[i]);
        }    
    }
  }else printf ("O valor nao eh numero perfeito.");
  return 0;
}