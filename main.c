#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
/*Vamos supor que lemos um inteiro binario.
Ou seja, ao lermos n = 111 assumimos que este e um numero binario
(e n~ao \cento e onze").
Como transformar este numero no correspondente valor decimal (7,
neste caso)?
Podemos usar a expressao:
somatorio (de i = 0 a n) = bi * 2 ^ i
Para isso, entretanto, devemos conseguir recuperar os digitos binarios
(bits) individualmente.
Note que:
I n % 10 recupera o ultimo digito de n.
I n = n / 10 remove o ultimo digito de n.*/
int main() {
unsigned long int n, dec = 0, pot = 1, bit;
printf("Digite um numero binario: ");
n = GetInt();
while (n > 0) {
bit = n % 10;
n = n / 10;
dec = dec + (bit * pot);
pot = pot * 2;
}
printf("%d\n", dec);
return 0;
}
