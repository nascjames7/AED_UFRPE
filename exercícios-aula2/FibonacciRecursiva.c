/**
<h1>Questao1_14</h1>
* Dado um número natural, encontra o termo da sequência de Fibonacci. 
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

//Dclaração do contador como variável global.
int contador;
//Função Recursiva da Série de Fibonacci.
long int fibonacci (int number)
{
    if (number == 1 || number == 2) {
        return 1;
    } else {
        contador += 2;
        return fibonacci(number - 1) + fibonacci(number-2);
    }
}
int main () 
{
//Declaração das variáveis.
  int number;
  long int resultado;  
  //Solicitação e leitura dos números.
  printf ("Digite o numero: ");
  scanf ("%d", &number);
  /**Implementação de condição para requerer um novo valor 
  * caso o número passado seja inválido.
  */
  while (number <= 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite o numero: \n");
    scanf ("%d", &number);
}         
  while (number) {
    contador = 0;
    resultado = fibonacci(number);
    //Impressão da resposta.
    printf ("O valor do termo %d da sequencia de Fibonacci eh: %d.\n", number, resultado);   
    printf ("O valor do contador: %d\n", contador);    
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
  }  
  return 0;
}


    
  