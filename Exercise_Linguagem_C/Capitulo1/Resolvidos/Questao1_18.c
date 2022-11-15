/**
<h1>Questao1_18</h1>
* Dados três números inteiros positivos, verificar se eles formam um triângulo retângulo. 
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
    int catetoOne, catetoTwo, hipotenusa;
    //Solicitação e leitura das variáveis.
    printf ("Digite o primeiro cateto: ");
    scanf ("%d", &catetoOne);
    /**Implementação de condição para requerer um novo valor 
    * caso o número passado seja inválido.
    */
    while (catetoOne <= 0) {
        printf ("O valor deve ser maior que zero.\n");        
        printf ("Digite o numero: ");
        scanf ("%d", &catetoOne);
    }    
    printf ("Digite o segundo cateto: ");
    scanf ("%d", &catetoTwo);
    /**Implementação de condição para requerer um novo valor 
    * caso o número passado seja inválido.
    */
    while (catetoTwo <= 0) {
        printf ("O valor deve ser maior que zero.\n");        
        printf ("Digite o numero: ");
        scanf ("%d", &catetoTwo);        
    }
    printf ("Digite a hipotenusa: ");
    scanf ("%d", &hipotenusa);
    /**Implementação de condição para requerer um novo valor 
    * caso o número passado seja inválido.
    */
    while (hipotenusa <= 0 || hipotenusa < catetoOne || hipotenusa < catetoTwo) {
        printf ("O valor deve ser maior que zero e que os valores dos catetos.\n");        
        printf ("Digite o numero: ");
        scanf ("%d", &hipotenusa);        
    }
    if (pow(hipotenusa,2) == pow(catetoOne,2) + pow(catetoTwo,2)) {
        printf ("Os lados formam um triangulo retangulo.");
    } else printf ("Os lados nao formam um triangulo retangulo.");
    return 0;
}

