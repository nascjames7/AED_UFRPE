/**
<h1>Questao1_25</h1>
* Dados três números inteiros positivos, ordena-os em ordem crescente. 
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 13/11/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
    //Declaração das variáveis.
    int primeiroValor, segundoValor, total = 0, soma = 0, termo, contador;
    //Solicitação e leitura dos valores.
    printf ("Digite um par de numeros: ");
    scanf ("%d %d", &primeiroValor, &segundoValor);
    printf ("(%d %d)\n", primeiroValor, segundoValor);
    //Implementação da condição de loop/parada.
    while (primeiroValor != 0) {
        total++;
        termo = 1;
        //Implementação do laço para o cálculo da soma.
        for (contador = 1; contador <= segundoValor; contador++) {
            termo *= primeiroValor;
        }
        printf ("Resposta: %d\n", termo);
        soma += termo;
        printf ("Soma: %d\n", soma);
        printf ("Digite um par de numeros: ");
        scanf ("(%d %d)", &primeiroValor, &segundoValor);
        printf ("(%d %d)\n", primeiroValor, segundoValor);
    }
    printf ("Total de pares: %d\n", total);
    return 0;
}


