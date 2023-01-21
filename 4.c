/*A palindromic number reads the same both ways. The largest palindrome made
from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int num, i, j, k, aux, maior=0, reverso = 0, comp = 0;
    char text[20];
    aux = num;
    for (i = 999; i >= 100; i--){
        for (j = 999; j >= 100; j--){
            num = i * j;
            aux = num;
            sprintf(text, "%d", num);
            comp = strlen(text);
            for (k = comp; k > 0; k--){
                reverso += (num % 10)*pow(10, k-1);
                num = num / 10;
            }
            if (reverso == aux){
                if (reverso > maior){
                    maior = reverso;
                }
            }else{
                reverso = 0;
            }
        }
    }
    printf("%d eh o maior palindromo de nultiplicacao de 3 digitos\n", maior);
        return 0;
}

