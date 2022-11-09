/**
<h1>Questao1_5</h1>
* Determina em que dia do mes de março, uma loja de discos que anota
*diariamente o número de discos vendidos, vendeu mais discos e imprimir seu valor.
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
int listaMensalVendas[31], listaInalterada[31], listaDiasMaiorVenda[31]; 
int dia, quantidadeVendida, chave, auxiliar;
int contador = 0;
//Solicitação e leitura das vendas diárias através da implementação do laço.
for (dia = 1; dia <= 31; dia++) {
    printf ("Digite a quantidade de discos vendidas no dia %d: ", dia);
    scanf ("%d", &listaMensalVendas[dia - 1]);
    /**Implementação de condição para requerer um novo valor 
    *caso o expoente passado seja inválido.
    */
    while (listaMensalVendas[dia] < 0) {
        printf ("O valor deve ser maior ou igual a zero.\n");        
        printf ("Digite a quantidade de discos vendidas no dia %d: ", dia);
        scanf ("%d", &listaMensalVendas[dia]);        
    }
    //Copia a lista dada como entrada para uma lista que não será alterada.
    listaInalterada[dia - 1] = listaMensalVendas[dia - 1];    
}
//Ultilização do algoritmo insertion sort para ordenar os dados.
for (dia = 1; dia <= 31; dia++) {
    //Atribui a variável chave o valor das vendas em determinado dia.
    chave = listaMensalVendas[dia];
    //Recebe o valor do dia anterior ao da chave.
    auxiliar = dia - 1;
    //Implementação da condição para permutar os valores.
    while (auxiliar >= 0 && listaMensalVendas[auxiliar] > chave) {
        /**Permuta os valores caso o valor do dia anterior seja superior
        * ao valor do dia que está em análise.
        */
        listaMensalVendas[auxiliar + 1] = listaMensalVendas[auxiliar];
        /**Decremento da variável auxiliar para percorrer
        * a lista comparando os valores e permutando.
        */
        auxiliar--;
        //Atribuição do valor da chave ao dia anterior.
        listaMensalVendas[auxiliar + 1] = chave;
    }
}
//Atribuição do maior valor de discos vendidos num único dia.
quantidadeVendida = listaMensalVendas[30];
//Declaração do contador do vetor que guarda os dias.
int i = 0;
//Implementação do laço para encontrar o dia de maior venda de discos.
for (int dia = 1; dia <= 31; dia++) {    
    //Implementação da condição para capturar o dia em análise.
    if (listaInalterada[dia - 1] == quantidadeVendida) {
        //Guarda o(s) dia(s) e que as vendas foram máximas.
        listaDiasMaiorVenda[i] = dia;
        //Incremento dos contadores.
        contador++;
        i = contador;
    }
}
//Implementação do laço para impressão da resposta.
if (contador == 1) {
    /**Impressão do dia em que ocorreu o máximo de vendas no mês de março,
    *bem como a quantidade vendida.
    */
    printf ("O valor maximo de vendas foi de %d no dia %d", quantidadeVendida, 
    listaDiasMaiorVenda[0]);
}
else {
    printf ("O valor maximo de vendas foi de %d nos dias ", quantidadeVendida);
    //Implementação do laço para impressão dos dias de mior venda.
    for (dia = 1; dia <= contador; dia++) {        
        //Implementação da condição para impressão dos dias.
        if (dia < contador) {
            printf ("%d, ", listaDiasMaiorVenda[dia - 1]);
        } else {
            //Implementação da condição para impressão do último dia.
            if (dia == contador) {            
            printf ("e %d.", listaDiasMaiorVenda[dia - 1]); 
            } 
        }
    }
}
return 0;
}

