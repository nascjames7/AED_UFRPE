/**
<h1>Questao1_19</h1>
* Dados três números inteiros positivos, ordena-os em ordem crescente. 
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
    int numberOne, numberTwo, numberThree;
    //Solicitação e leitura das variáveis.
    printf ("Digite o primeiro numero: ");
    scanf ("%d", &numberOne);
    /**Implementação de condição para requerer um novo valor 
    * caso o número passado seja inválido.
    */
    while (numberOne <= 0) {
        printf ("O valor deve ser maior que zero.\n");        
        printf ("Digite o numero: ");
        scanf ("%d", &numberOne);
    }    
    printf ("Digite o segundo numero: ");
    scanf ("%d", &numberTwo);
    /**Implementação de condição para requerer um novo valor 
    * caso o número passado seja inválido.
    */
    while (numberTwo <= 0) {
        printf ("O valor deve ser maior que zero.\n");        
        printf ("Digite o numero: ");
        scanf ("%d", &numberTwo);        
    }
    printf ("Digite o terceiro numero: ");
    scanf ("%d", &numberThree);
    /**Implementação de condição para requerer um novo valor 
    * caso o número passado seja inválido.
    */
    while (numberThree <= 0) {
        printf ("O valor deve ser maior que zero e que os valores dos catetos.\n");        
        printf ("Digite o numero: ");
        scanf ("%d", &numberThree);        
    }
    if (numberThree >= numberTwo &&  numberThree >= numberOne) {
        if (numberTwo >= numberOne) {
            printf ("%d <= %d <= %d.", numberOne, numberTwo, numberThree);
        } else printf ("%d <= %d <= %d.", numberTwo, numberOne, numberThree);
    }
    if (numberTwo >= numberThree &&  numberTwo >= numberOne) {
        if (numberThree >= numberOne) {
            printf ("%d <= %d <= %d.", numberOne, numberThree, numberTwo);
        } else printf ("%d <= %d <= %d.", numberThree, numberOne, numberTwo);
    }
    if (numberOne >= numberThree &&  numberOne >= numberTwo) {
        if (numberThree >= numberTwo) {
            printf ("%d <= %d <= %d.", numberTwo, numberThree, numberOne);
        } else printf ("%d <= %d <= %d.", numberThree, numberTwo, numberOne);
    }        
    return 0;
}