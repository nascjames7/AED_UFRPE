/**
<h1>Questao1_6</h1>
* Determina a menor e maior nota de uma lista de notas de tamanho n.
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
int tamanho, chave, auxiliar;
//Solicitação e leitura do tamanho da lista.
printf ("Digite o numero de alunos: ");
scanf ("%d", &tamanho);
/**Implementação de condição para requerer um novo valor 
*caso o tamanho passado seja inválido.
*/
while (tamanho <= 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite o numero de alunos: ");
    scanf ("%d", &tamanho);
}
//Declaração do vetor.
int listaNotas[tamanho];
//Implementação do laço para guardar as notas.
for (int posicao = 0; posicao < tamanho; posicao++) {
    printf ("Digite a nota: ");
    scanf ("%d", &listaNotas[posicao]);
    /**Implementação de condição para requerer um novo valor 
    *caso a nota passada seja inválida.
    */
    while (listaNotas[posicao] < 0) {
        printf ("O valor deve ser maior ou igual a zero.\n");        
        printf ("Digite a nota: ");
        scanf ("%d", &listaNotas[posicao]);        
    }      
}
for (int i = 0; i < tamanho; i++){
    printf ("%d: %d\n", i, listaNotas[i]);
}
//Utilização do algoritmo insertion sort para ordenar os dados.
for (int posicao = 1; posicao <= tamanho; posicao++) {
    //Atribui a variável chave o valor das vendas em determinado dia.
    chave = listaNotas[posicao];
    //Recebe o valor do dia anterior ao da chave.
    auxiliar = posicao - 1;
    //Implementação da condição para permutar os valores.
    while (auxiliar >= 0 && listaNotas[auxiliar] > chave) {
        /**Permuta os valores caso o valor do dia anterior seja superior
        * ao valor do dia que está em análise.
        */
        listaNotas[auxiliar + 1] = listaNotas[auxiliar];
        /**Decremento da variável auxiliar para percorrer
        * a lista comparando os valores e permutando.
        */
        auxiliar--;
        //Atribuição do valor da chave ao dia anterior.
        listaNotas[auxiliar + 1] = chave;
    }
}
for (int i = 0; i < tamanho; i++){
    printf ("%d: %d\n", i, listaNotas[i]);
}
//Impressão da resposta final.
printf ("A maior nota: %d\n", listaNotas[tamanho - 1]);
printf ("A menor nota: %d\n", listaNotas[0]);
return 0;
}

