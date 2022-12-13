/**
<h1>Questao07</h1>
* Dados tres números naturais, calcular o tempo O(log n).
* <p>
* <b>Nota:<b> Leia atentamente a documentação deste programa 
* para desfrutar dos recursos oferecidos pelo autor.
* 
* @author James Anderson
* @version 1.0
* @since 13/12/2022
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
//Declaração das variáveis.
int x, y, n;
double tempo;
//Solicitação e leitura de x.
printf ("Digite x: ");
scanf ("%d", &x);
//Solicitação e leitura de y.
printf ("Digite y: ");
scanf ("%d", &y);
//Solicitação e leitura de n.
printf ("Digite n: ");
scanf ("%d", &n);
//Cálculo do tempo.
if(n%2 == 0){
    tempo = x*y*pow((pow(x,2)), ((n-1)/2));
} else tempo = y*pow((pow(x,2)), (n/2));     
printf ("O valor da potencia eh dado por: %.4f", tempo);
return 0;
}

