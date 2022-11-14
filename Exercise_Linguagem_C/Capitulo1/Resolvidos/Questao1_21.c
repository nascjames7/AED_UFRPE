/**
<h1>Questao1_21</h1>
* Dados n uma sequencia de n números, determinar quantos segmentos de números iguais
* consecutivos compõem esta sequencia. 
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 14/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
    //Declaração das variáveis.
    int number;
    //Solicitaçaõ e leitura da variável.
    printf ("Digite um numero: ");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite um numero: ");
        scanf ("%d", &number);
    } 
    //Declaraçaõ do array.
    int segmentos[number];
    //Implementaçaõ do laço para contagem e verificação dos segmentos da sequencia.
    for (int position = 0; position <= number; position++) {
        
    }
}