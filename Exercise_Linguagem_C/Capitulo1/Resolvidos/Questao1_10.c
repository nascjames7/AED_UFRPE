/**
<h1>Questao1_10</h1>
* Dado um número inteiro positivo, descobre se o mesmo é triangular, ou seja,
* se o produto de três números consecutivos naturais produzem o valor requerido.
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
int number, numberTriangular; 
printf ("Digite um numero positivo: ");
scanf ("%d", &number);
/**Implementação de condição para requerer um novo valor 
*caso o numero informado seja inválido.
*/
while (number <= 0) {
    printf ("O valor deve ser maior ou igual a zero.\n");        
    printf ("Digite um numero positivo: ");
    scanf ("%d", &number);       
}
//Declaração da varível de controle.
int i = 0;
//Implementação da condição de parada.
while (i < number) {
    //Implementação do laço para descobrir se o número é triangular.
    for (i = 0; i < number; i++) {
        numberTriangular = i*(i + 1)*(i + 2);
        //Implementação da condição de verificação de iguadade.
        if (numberTriangular == number) {
            printf ("O numero %d eh triangular, pois (%d*%d*%d = %d). " , number, i , i + 1, i + 2, number);
        }
        //Condição de encerramento do programa.
        if (numberTriangular > number) {
            printf ("O numero %d nao eh triangular, pois (%d*%d*%d = %d > %d). " , number, i , i + 1, i + 2, numberTriangular, number);
            i = number;
        }
    }
}
return 0;
}