/**
<h1>Questao1_4</h1>
* Dado um inteiro x, e um inteiro não negativo n, calcula x elevado a n.
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
int base, expoente;
double potencia;
//Solicitação e leitura da base.
printf ("Digite a base: ");
scanf ("%d", &base);
//Solicitação e leitura do expoente.
    printf ("Digite o expoente: ");
    scanf ("%d", &expoente);
/**Implementação de condição para requerer um novo valor 
*caso o expoente passado seja inválido.
*/
while (expoente <= 0) {
    printf ("O expoente ser maior que zero.\n");
    //Solicitação e leitura do expoente.
    printf ("Digite o expoente: ");
    scanf ("%d", &expoente);
}
//Calcula e imprime a potência.
potencia = pow(base,expoente);         
printf ("O valor da potencia eh dado por: %.4f", potencia);
return 0;
}

