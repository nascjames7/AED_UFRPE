/**
<h1>Questao1_9</h1>
* Dado um inteiro n não negativo, e dois numeros naturais i e j, positivos, 
* imprime os n multiplos i, j, ou ambos! 
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 09/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int numberOne, numberTwo, quantidadeMultiplos, chave, auxiliar;
//Solicitação e leitura do número de múltiplos.
printf ("Digite o numero de elementos da lista: ");
scanf ("%d", &quantidadeMultiplos);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (quantidadeMultiplos <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o numero de elementos da lista: ");
    scanf ("%d", &quantidadeMultiplos);
}
//Declaração dos vetores.
int multiplos[2*quantidadeMultiplos];
int multiplosNumberOne[quantidadeMultiplos], multiplosNumberTwo[quantidadeMultiplos];
//Solicitação e leitura do primeiro número.
printf ("Digite o primeiro numero natural: ");
scanf ("%d", &numberOne);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (numberOne <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o primeiro numero natural: ");
    scanf ("%d", &numberOne);
}
//Solicitação e leitura do número de múltiplos.
printf ("Digite o segundo número natural: ");
scanf ("%d", &numberTwo);
/**Implementação de condição para requerer um novo valor 
*caso o número passado seja inválido.
*/
while (numberTwo <= 0) {
    printf ("O tamanho da lista deve ser maior que zero.\n");
    //Solicitação e leitura do número de elementos da lista.
    printf ("Digite o segundo numero natural: ");
    scanf ("%d", &numberTwo);
}
//Implementação do laço para encontrar os múltiplos do primeiro número.
for (int i = 0; i < quantidadeMultiplos; i++) {
    multiplosNumberOne[i] = numberOne*i;
    printf ("Multiplo de %d: %d\n", numberOne, multiplosNumberOne[i]);
}
//Implementação do laço para encontrar os múltiplos do segundo número.
for (int i = 0; i < quantidadeMultiplos; i++) {
    multiplosNumberTwo[i] = numberTwo*i;
    printf ("Multiplo de %d: %d\n", numberTwo, multiplosNumberTwo[i]);
}
//Implementação do laço para colocar todos os múltiplos encontrados.
for (int i = 0; i < (2*quantidadeMultiplos); i++) {
    if (i < quantidadeMultiplos) {
    multiplos[i] = multiplosNumberOne[i];
    }
    if (i >= quantidadeMultiplos) {
        multiplos[i] = multiplosNumberTwo[i - quantidadeMultiplos];
    }
}
for (int i = 0; i < (2*quantidadeMultiplos); i++) {
    printf ("Multiplo: %d\n", multiplos[i]);
}
//Utilização do algoritmo insertion sort para ordenar os dados.
for (int i = 1; i <= (2*quantidadeMultiplos); i++) {
    //Atribui a variável chave o valor das vendas em determinado dia.
    chave = multiplos[i];
    //Recebe o valor do dia anterior ao da chave.
    auxiliar = i - 1;
    //Implementação da condição para permutar os valores.
    while (auxiliar >= 0 && multiplos[auxiliar] > chave) {
        /**Permuta os valores caso o valor do dia anterior seja superior
        * ao valor do dia que está em análise.
        */
        multiplos[auxiliar + 1] = multiplos[auxiliar];
        /**Decremento da variável auxiliar para percorrer
        * a lista comparando os valores e permutando.
        */
        auxiliar--;
        //Atribuição do valor da chave ao dia anterior.
        multiplos[auxiliar + 1] = chave;
    }
}
for (int i = 0; i < (2*quantidadeMultiplos); i++) {
    printf ("Multiplo: %d\n", multiplos[i]);
}
//Impressão da resposta final.
for (int i = 1; i < quantidadeMultiplos; i++) {
    printf ("%d, ", multiplos[0]);
    if (multiplos[i] == multiplos[i - 1]) {
        quantidadeMultiplos++;
    }
    //Impressão dos múltiplo difererntes do primiro e último inteiros do vetor.
    if (i > 0 && multiplos[i] != multiplos[i - 1] && i != (quantidadeMultiplos - 1)) {
        printf ("%d, ", multiplos[i]);
    }
    if (i = (quantidadeMultiplos - 1)) {
        printf ("e %d.", multiplos[i]);
    }
}
return 0;
}