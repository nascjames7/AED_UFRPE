/**
<h1>Questao2_8</h1>
* Dados um número natural n, e uma seuencia de n termos, descobrir se a mesma é k-alternance.
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
    int number, termo, contadorPar = 0, contadorImpar = 0;    
    //Solicitaçao e leitura da variável.
    printf ("Digite o limite superior do intervalo: \n");
    scanf ("%d", &number);
    //Implementação da condição para leitura de um valor válido.
    while (number <= 0) {
        printf ("Digite o numero de valores da sequencia: \n");
        scanf ("%d", &number);
    }
    //Declaração do array para guardar a sequência.
    int sequencia[number];
    //Implementação do laço para o preenchimento do array.
    for (int i = 0; i < number; i++) {
        printf ("Digite oum valor da sequencia: \n");
        scanf ("%d", &termo);
        sequencia[i] = termo;
    }
    //Implementação das condições de verificação.
    for (int i = 0; i < number; i++) {
        //Implementação das condições de verificação.
        if (sequencia[i]%2 == 0) {
            contadorPar++;            
        } 
        if (sequencia[i]%2 == 1) {
            contadorImpar++;
        }      
    }
    if (contadorPar != contadorImpar) {
        printf ("A sequencia nao eh k-alternance!");
    }
    else {
        printf ("A sequencia pode ser k-alternance! Vamos verificar!");
        for (int i = 0; i < number; i++) {
            if (sequencia[0]%2 == 0) {
                contadorPar++;            
            } 
            if (sequencia[0]%2 == 1) {
                contadorImpar++;
            }
            if (contadorPar > contadorImpar) {
                if (sequencia[i]%2 == 0) {
                    contadorPar++;
                }
            }
    //Implementação do laço para verifica se a sequência é k-alternance.
    for (int i = 1; i < number; i++) {
        //Implementação das condições de verificação.
        
    }   
        
    return 0;
}