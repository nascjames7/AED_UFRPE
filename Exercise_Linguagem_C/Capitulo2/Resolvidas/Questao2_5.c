/**
<h1>Questao2_5</h1>
* Dados um número natural m,  determina os números ímpares que somados equivalem
* a n ao cubo, onde n pode variar no intervalo [1, m].
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 16/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
    //Declaração das variáveis.
    int soma = 0, number, contador = 0;    
    //Solicitaçao e leitura da variável.
    printf ("Digite o numero de valores da sequencia: \n");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite o numero de valores da sequencia: \n");
        scanf ("%d", &number);
    }
    //Declaração do array para guardar a sequancia.
    int sequencia[number];
    //Impementação do laço para o preenchimento do array.
    for (int i = 0; i < number; i++) {
        printf ("Digite um valor: ");
        scanf ("%d", &sequencia[i]);        
    }
    //Impementação do laço para o cálculo da soma.
    for (int i = 0; i < number; i++) {
        printf ("i: %d\n", i);
        //Implementação do laço para o cálculo da soma.
        for (int position = 1; position <= sequencia[i]; position++) {
            //Implementação da condição para incrementar o contador.
            if (sequencia[i]%position == 0) {
                printf ("sequencia[%d]: %d\n", i, sequencia[i]);
                //Incremento do contador.
                contador++;
                printf ("contador: %d\n", contador);
            }
        }
        //Implementação da condição para verificar se o número é primo.                
        if (contador == 2) {
            //Definição da soma.
            soma += sequencia[i];
            //printf ("soma: %d\n", soma);            
        }
        //Zera o contador.
        contador = 0;
    }        
    //Impressão do somatório.
    printf ("A soma: %d", soma);     
    return 0;
}