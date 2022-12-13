/**
<h1>Questao06</h1>
* Dado um inteiro a, e um natural n, calcula a elevado a n.
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 09/12/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int base, expoente;
double potencia = 1;
//Solicitação e leitura da base.
printf ("Digite a base: ");
scanf ("%d", &base);
//Solicitação e leitura do expoente.
printf ("Digite o expoente: ");
scanf ("%d", &expoente);
//Implementação do laço para o cálculo da potência.
for (int i = 1; i <= expoente; i++) {
    //Calcula a potência.
    potencia *= base;
}         
printf ("O valor da potencia eh dado por: %.4f", potencia);
return 0;
}

