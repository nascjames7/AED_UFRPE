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
    int number, termo, contador = 0, quantidadeSegmentosDiferentes = 0;
    //Solicitaçaõ e leitura da variável.
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
        segmentos[position] = termo;
    }
    //Implementaçaõ do laço para contagem e verificação dos segmentos da sequencia.
    for (int position = 0; position < number; position++) {
        //Implementação das condições para contagem dos segmentos.
        if (serie[position] == serie[position + 1]) {
            contador++;
            segmentos[quantidadeSegmentosDiferentes] = contador;
        } else {
            if (position > 0 && serie[position] != serie[position + 1] && 
            serie[position] == serie[position - 1]) {
            contador++;
            segmentos[quantidadeSegmentosDiferentes] = contador;
            //Zera o contador.
            contador = 0;
            //Incrementa a posição
            quantidadeSegmentosDiferentes++;        
            }
            else {
            contador++;
            //printf ("contador unitario: ", contador);
            //Guarda a quantidade de segmentos de mesmo valor. 
            segmentos[quantidadeSegmentosDiferentes] = contador;
            //Incremento da posuição do array.
            quantidadeSegmentosDiferentes++;
            //Zera o contador para o próximo segmento.
            contador = 0;             
            }
        }
    printf ("O numero de segmentos: %d", quantidadeSegmentosDiferentes);
    return 0;
}