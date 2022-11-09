/**
<h1>Questao1_8</h1>
* Dado um inteiro n não negativo, determinar n! 
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
int number, auxiliar;
long fatorial = 1;
//Solicitação e leitura do numero.
printf ("Digite o numero: ");
scanf ("%d", &number);
/**Implementação de condição para requerer um novo valor 
*caso o tamanho passado seja inválido.
*/
while (number < 0) {
    printf ("O valor deve ser maior que zero.\n");        
    printf ("Digite o numero: ");
    scanf ("%d", &number);
}
auxiliar = number;
if (number == 0) {
    fatorial = 1;
    printf ("O fatorial de %d: %d\n", auxiliar, fatorial);
    return 0;
}
if (number == 2 || number == 1) {
    fatorial = number;
    printf ("O fatorial de %d: %d\n", auxiliar, fatorial);
    return 0;
}
else{
    for (int i = 1; i <= number; i++) {    
        fatorial *= i;        
    }
    printf ("O fatorial de %d: %d\n", auxiliar, fatorial);    
}
return 0;
}