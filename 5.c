/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <stdio.h>

int main()
{
    int i, num = 1, cont = 0;
    for (i = 1; i <= 20; i++){
        if (num % i == 0){
            cont++;
        }else{
        num++;
        i = 0;
        cont = 0;
        }
    }
    if (cont == 20){
        printf("Menor multiplo de 1 a 20 = %d\n", num);
    }
    return 0;
}
