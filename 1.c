#include <stdio.h>

int main()
{
    int soma = 0;

    for(int i = 0; i<1000; i++){
        if (i%3 == 0 || i%5 == 0){
            soma += i;
        }
    }
    printf("soma = %d", soma);

    getchar();
    return 0;
}