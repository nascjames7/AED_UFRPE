/**
<h1>Questao1_11</h1>
* Dado um número inteiro positivo, verifica se ele é primo.
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
int number, contador = 0; 
printf ("Digite um numero positivo: ");
scanf ("%d", &number);
/**Implementação de condição para requerer um novo valor 
*caso o numero informado seja inválido.
*/
while (number <= 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite um numero positivo: ");
    scanf ("%d", &number);       
}
//Implementação do laço para descobrir se o número é primo.
for (int i = 1; i <= number; i++) {
    //Condição de verificação de número primo.
    if(number%i == 0){
        contador++;
    }
}
if (contador == 2) {
    printf ("O numero %d eh primo.", number);
} else printf ("O numero %d nao eh primo.", number);
    
return 0;
}