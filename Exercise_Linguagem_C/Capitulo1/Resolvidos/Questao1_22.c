/**
<h1>Questao1_22</h1>
* Dados n uma sequencia de n números, determinar o comprimento de um segmento crescente
* de comprimento máximo. 
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
    int number, termo, contador = 1, auxiliar, chave;
    int quantidadeSegmentosDiferentes = 0;
    //Solicitaçao e leitura da variável.
    printf ("Digite um numero: ");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite um numero: ");
        scanf ("%d", &number);
    } 
    //Declaraçaõ do array.
    int serie[number], segmentos[number];
    //Implementação do laço para obter a sequenncia.
    for (int position = 0; position < number; position++) {
        printf ("Digite o termo %d da sequencia: ", position + 1);
        scanf ("%d", &termo);
        serie[position] = termo;
    }    
    //Implementação do laço para contagem e verificação dos segmentos da sequencia.
    for (int position = 1; position < number; position++) {
        //Implementação das condições para contagem dos segmentos.
        if (serie[position-1] < serie[position]) {
            //Incremento do contador.
            contador++;            
        } else {
            //Atribuição do array.
            segmentos[quantidadeSegmentosDiferentes] = contador;
            printf ("quant1: %d\n", segmentos[quantidadeSegmentosDiferentes]);
            if (position != 1) {
                //Incremento da posição do array.       
                quantidadeSegmentosDiferentes++;
            }            
            //segmentos[quantidadeSegmentosDiferentes] = 1;            
            printf ("quant2: %d\n", segmentos[quantidadeSegmentosDiferentes]);            
            //Incrementa a posição do array.
            quantidadeSegmentosDiferentes++;
            //Retorna o contador ao valor inicial.
            contador = 1;        
            }            
    }    
    //Utilização do algoritmo insertion sort para ordenar os dados.
    for (int position = 1; position < (4*number); position++) {
        //Atribui a variável chave o valor das vendas em determinado dia.
        chave = segmentos[position];
        //Recebe o valor do dia anterior ao da chave.
        auxiliar = position - 1;
        //Implementação da condição para permutar os valores.
        while (auxiliar >= 0 && segmentos[auxiliar] > chave) {
            /**Permuta os valores caso o valor do dia anterior seja superior
            * ao valor do dia que está em análise.
            */
            segmentos[auxiliar + 1] = segmentos[auxiliar];
            /**Decremento da variável auxiliar para percorrer
            * a lista comparando os valores e permutando.
            */
            auxiliar--;
            //Atribuição do valor da chave ao dia anterior.
            segmentos[auxiliar + 1] = chave;
        }
    }
    //Impressão da resposta final.
    printf ("O maior segmento crescente: %d", segmentos[number - 1]);
    return 0;
}