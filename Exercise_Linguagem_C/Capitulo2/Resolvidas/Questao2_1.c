/**
<h1>Qestao2_1</h1>
* Dados um número positivo n, e n sequencias de numeros inteiros terminados por zero, 
* calcula a soma dos números pares para cada sequência.
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
    int quantidadeSeries, number, contador = 0, soma = 0;    
    //Solicitaçao e leitura da variável.
    printf ("Digite um numero: ");
    scanf ("%d", &quantidadeSeries);
    //Implementação da condição para leitura de um valor válido.
    while (quantidadeSeries <= 0) {
        printf ("Digite um numero: ");
        scanf ("%d", &quantidadeSeries);
    }    
    //Implementação do laço para o número de series. 
    while (contador < quantidadeSeries) {
         do {
            printf ("Digite um valor inteiro: ");
            scanf ("%d", &number);
            //Implementação da condição de soma.
            if (number%2 == 0) {                
                //Definição da soma.
                soma += number;
            }            
        }while (number != 0);
        //Incremento do contador.
        contador++; 
        //Impressão da soma de cada sequencia.
        printf ("A soma da sequencia %d: %d\n", contador, soma);
        //Soma zerada.
        soma = 0;
    }
    return 0;
}