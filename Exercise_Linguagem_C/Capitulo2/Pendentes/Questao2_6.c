/**
<h1>Questao2_6</h1>
* Dado  um número inteiro positivo, imprime seus fatores primos e a multiplicidade de cada.
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
    int number, contador = 0, multiplicidade = 0, divisor, guardaNumber;    
    //Solicitaçao e leitura da variável.
    printf ("Digite o limite superior do intervalo: \n");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite o numero de valores da sequencia: \n");
        scanf ("%d", &number);
    }
    //Declaração dos array para guardar a sequência de divisores e multiplicidade.
    int fatoresPrimos[number], contadorMultiplicidade[number], produto = 1;
    int j = 0;
    guardaNumber = number;
    //Impementação do laço para o preenchimento do array.
    for (divisor = 2; divisor <= number; divisor++) {        
         do {
            //Implementação da condição para preenchimento do array.
            if (number%divisor == 0) {
                printf ("number: %d\n", number);
                printf ("divisor: %d\n", divisor);
                fatoresPrimos[contador] = divisor;
                //Incremento da multiplicidade.
                multiplicidade++;
                printf ("multiplicidadeMudou: %d\n", multiplicidade);
                //Incremento do contador.
                contador++;
                printf ("contadorMudou: %d\n", contador);
                //Redefinição do dividendo.
                number = number/divisor;
                printf ("numberMudou: %d\n", number);
                //Implementação de condição de atribuição da multiplicidade.
                if (number%(divisor + 1) != 0) {
                    printf ("testeProximoDivisor %d: resto: %d\n", divisor + 1, number%(divisor + 1));
                    contadorMultiplicidade[j] = multiplicidade;
                    printf ("contadorMultiplicidade[%d]: %d\n", j, contadorMultiplicidade[j]);
                    //Definição do produto.
                    produto = produto*contadorMultiplicidade[j];
                    //Zera a multiplicidade.
                    multiplicidade = 0;
                    //Incremento de j.
                    j++;
                    printf ("jMudou: %d\n", j);
                }
            }
        //Condição de parada do loop.
        }while (number != 1 || produto != number);
    }
    //Declaração de variável de controle para a multiplicidade.
    int k = 0;
    //Impressão dos fatores primos e sua respectiva multiplicidade.
    printf ("Fatores primos: ");    
    for (int i = 0; i <= guardaNumber; i++) {
        printf ("guarda: %d\n", guardaNumber);
        //Condição de impressão.
        if (i == 0 || (i != 0 && fatoresPrimos[i - 1] != fatoresPrimos[i])) {        
            printf ("%d: %d\n", fatoresPrimos[i], contadorMultiplicidade[k]);
            //Incremento do array contadorMultiplicidade.
            k++;
            printf ("kMudou: %d\n", k);                
        }
        if (i != 0 && fatoresPrimos[i - 1] == fatoresPrimos[i]) {        
            i++;
        }
    }           
    return 0;
}