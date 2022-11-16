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
    int soma = 0, limiteSuperior, contador = 0;    
    //Solicitaçao e leitura da variável.
    printf ("Digite o limite superior do intervalo: \n");
    scanf ("%d", &limiteSuperior);
    //Implementação da condição para leitura de um valor válido.
    while (limiteSuperior <= 0) {
        printf ("Digite o numero de valores da sequencia: \n");
        scanf ("%d", &limiteSuperior);
    }
    //Declaração do array para guardar a sequência.
    int sequencia[limiteSuperior];
    //Impementação do laço para o preenchimento do array.
    for (int i = 0; i < limiteSuperior; i++) {
        //Implementação das condições.
        if (limiteSuperior == 1 && i == 0) {
            sequencia[0] = 1;
            soma += sequencia[0];      
        }
        if (limiteSuperior != 1 && i == 0) {
            sequencia[0] = 1 + limiteSuperior*(limiteSuperior - 1);
            soma += sequencia[0];           
        }
        if (limiteSuperior != 1 && i != 0) {
            sequencia[i] = sequencia[i - 1] + 2;
            soma += sequencia[i];            
        }
    }          
    //Dclaração da potência cúbica do limiteSuperior.
    int potencia = pow(limiteSuperior, 3);
    //Impressão da sequencia.
    printf ("%d = ", potencia);
    for (int i = 0; i < limiteSuperior; i++) {
        //Para valores que estejam antes da última posição.
        if (i < (limiteSuperior - 1)) {
            printf ("%d + ", sequencia[i]);
        }
        //Para a última posição.
        if (i == (limiteSuperior - 1)) {
            printf ("%d = %d", sequencia[i], soma);
        }
    }         
    return 0;
}