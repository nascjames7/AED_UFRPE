/**
<h1>Questao2_3</h1>
* Dados dois números positivos inteiros m e n, determinar o par ordenado (x, y), 
* onde x e y são pares e estão compreendidos no intervalo: 0 <= x <= m e 0 <= y <= y.
* De tal forma que se encontre o par ordenado que apresente o maior valor para a equação
* xy - xx + y.
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
    int intervaloX, intervaloY, x, y, valorMaximo;    
    //Solicitaçao e leitura da variável.
    printf ("Digite um numero para valor maximo de x: ");
    scanf ("%d", &intervaloX);
    //Implementação da condição para leitura de um valor válido.
    while (intervaloX <= 0) {
        printf ("Digite um numero para valor maximo de x: ");
        scanf ("%d", &intervaloX);
    } 
    printf ("Digite um numero para valor maximo de y: ");
    scanf ("%d", &intervaloY);
    //Implementação da condição para leitura de um valor válido.
    while (intervaloY <= 0) {
        printf ("Digite um numero para valor maximo de y: ");
        scanf ("%d", &intervaloY);
    } 
    /**Observando a equação, percebemos que o valor fica maximizado ao tomarmos
     * o maior valor par no intervalo dispoivel para y e o menos valor, também par,
     *  disponivel para x.     
     */
    //Definição de x. Este é o menor valor (com exceção de zero que o x pode assumir).
    //Para qualquer outro valor, a função não fica maximizada.
    x = 2;
    //Implementação da condição onde y assume o maior valor par possivel dentro do intervalo.
    if (intervaloY%2 == 0) {
        y = intervaloY;
    } else y = intervaloY - 1;
    //Definição do valor maximo.
    valorMaximo = x*y - pow(x,2) + y;
    //Impressão do valor maximo.
    printf ("Valor maximo: %d", valorMaximo);     
    return 0;
}