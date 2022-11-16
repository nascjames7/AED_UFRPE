/**
<h1>Qestao2_2</h1>
* Dado um número positivo n, imprimir todos os números inteiros entre 1 e n que são 
* hipotenusa de dois catetos inteiros.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 15/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
    //Declaração das variáveis.
    int number, hipotenusa = 5;    
    //Solicitaçao e leitura da variável.
    printf ("Digite um numero: ");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite um numero: ");
        scanf ("%d", &number);
    } 
    /**Implemetação do laço para verificar se é hipotenusa inteiro. 
     * Sabendo que as hipotenusas inteiras fazem parte da série: 5, 10, 20, 40....
     * Sendo esta uma sequencia geométrica dada por: 
     * Termo(n) = 2*Termo(n - 1) e Termo(1) = 5;
     */
    for (int position = 1; position < number; position++) {
        //Implementação da condição de validação da hipotenusa.
        if (hipotenusa < number && hipotenusa > 0) {
            //Imprime uma das hipotenusas dentro do intervalo válido.
            printf ("hipotenusa %d = %d\n", position, hipotenusa);
        }
        //Muda a hipotenusa para o dobro de seu valor anterior.
        hipotenusa *= 2;
    }   
    return 0;
}