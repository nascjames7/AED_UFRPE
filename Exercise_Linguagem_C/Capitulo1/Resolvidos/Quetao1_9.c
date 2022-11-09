/**
<h1>Questao1_9</h1>
* Dado um inteiro n não negativo, e dois numeros naturais i e j, positivos, 
* imprime os n multiplos i, j, ou ambos! 
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 09/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int numberOne, numberTwo, quantidadeMultiplos, contador1, contador2;
//Solicitação e leitura do número de múltiplos.
printf ("Digite o numero de elementos da lista: ");
scanf ("%d", &quantidadeMultiplos);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (quantidadeMultiplos <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o numero de elementos da lista: ");
    scanf ("%d", &quantidadeMultiplos);
}
//Declaração do vetor.
int multiplos[2*quantidadeMultiplos];
//Solicitação e leitura do primeiro número.
printf ("Digite o primeiro numero natural: ");
scanf ("%d", &numberOne);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (numberOne <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o primeiro numero natural: ");
    scanf ("%d", &numberOne);
}
//Solicitação e leitura do número de múltiplos.
printf ("Digite o segundo número natural: ");
scanf ("%d", &numberTwo);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (numberTwo <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o segundo número natural: ");
    scanf ("%d", &numberTwo);
}
if (quantidadeMultiplos > 0) {
    //Declaração do primeiro multiplo.
    multiplos[0] = 0;    
    //Implementação do laço para guardar os múltiplos.
    for (int i = 1; i < quantidadeMultiplos; i++) {                
        //Implementação da condição para preencimento do vetor.
        if(numberOne == numberTwo) {
            multiplos[i] = numberOne*i;
        }
        else {
            if (numberOne < numberTwo) {
                multiplos[i] = numberOne*i;
                contador1++;
            }
            else {
                multiplos[i] = numberTwo*i;
                contador2++;
            }
        }
    }
    if (contador1 != contador2) {
        if (contador1 > contador2) {
            for
        }


    }           
        

    

    }

}
   



}