/**
<h1>Questao1_23</h1>
* Dados uma sequencia de n números, verificar se eles formam um palíndromo.
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
    int number, contador = 0;    
    //Solicitaçao e leitura da variável.
    printf ("Digite um numero: ");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite um numero: ");
        scanf ("%d", &number);
    }
    //Declaração do vetor.  
    int serie[number];  
    //Implementação do laço para obter a sequenncia de números.
    for (int position = 0; position < number; position++) {
        printf ("Digite o termo %d da sequencia: ", position);
        scanf ("%d", &serie[position]);        
    }
    //Implementação do laço para verificar se a sequência forma um palíndromo.
    for (int position = 0; position < number; position++) {
        if (serie[position] == serie[number - 1 - position]) {
            contador++;
        }      
    }
    printf ("contador: %d", contador);

    //Implementação da condição para avaliação final.
    if (number%2 == 0 && contador == number/2) {
        printf ("O numero informado representa um palindromo.");
    } 
    if (number%2 == 0 && contador != number/2) {
        printf ("O numero informado nao representa um palindromo.");
    }
    if (number%2 == 1 && contador == (1 + number/2)) {
        printf ("O numero informado representa um palindromo.");
    } 
    if (number%2 == 1 && contador != (1 + number/2)) {
     printf ("O numero informado nao representa um palindromo."); 
    }
  return 0;
}