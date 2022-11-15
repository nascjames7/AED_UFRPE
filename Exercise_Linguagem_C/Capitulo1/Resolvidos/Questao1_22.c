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
    int serie[number], segmentos[4*number];
    //Implementação do laço para obter a sequenncia.
    for (int position = 0; position < number; position++) {
        printf ("Digite o termo %d da sequencia: ", position + 1);
        scanf ("%d", &termo);
        serie[position] = termo;
    }  
    //Implementação para preenchimento inicial do vetor com inteiro -1.
    for (int position = 0; position < (4*number); position++) {
        segmentos[position] = -1;
    }  
    //Implementação do laço para contagem e verificação dos segmentos da sequencia.
    for (int position = 1; position < number; position++) {
        printf ("position: %d\n", position);
        printf ("serie: %d", serie[position]);
        //Implementação da condição do último termo.
        if (position == (number - 1) && (serie[position-1] > serie[position])) {
            segmentos[quantidadeSegmentosDiferentes] = contador - 1;
            printf ("quantSegmentos: %d\n", segmentos[quantidadeSegmentosDiferentes]);
        }          
        //Implementação das condições para contagem dos segmentos.
        if (serie[position-1] <= serie[position]) {            
            //Incremento do contador.
            contador++;
            printf ("contador: %d\n", contador);
            printf ("quantidade1: %d\n", quantidadeSegmentosDiferentes);                      
        }else {
            printf ("quantidade2a: %d\n", quantidadeSegmentosDiferentes);
            printf ("contador: %d\n", contador);
            //Atribuição do array.
            segmentos[quantidadeSegmentosDiferentes] = contador;
            printf ("quantSegmentos: %d\n", segmentos[quantidadeSegmentosDiferentes]);            
            //Incremento da posição do array.       
            quantidadeSegmentosDiferentes++;
            printf ("quantidade2d: %d\n", quantidadeSegmentosDiferentes);                        
            //Retorna o contador ao valor inicial.
            contador = 1;
            printf ("contador: %d\n", contador);            
            }
    }
    printf ("quantidade: %d\n", quantidadeSegmentosDiferentes);   
    //Utilização do algoritmo insertion sort para ordenar os dados.
    for (int position = 1; position < (number); position++) {
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