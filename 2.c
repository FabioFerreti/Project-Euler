#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma = 0, ini = 0, fim = 1, aux = 0;

        for(i = 1; i < 70; i++){
            if (soma % 2 == 0){
                if (soma < 4000000){
                    printf("soma de %d = %d    ", i-1, soma);
                    aux += soma;
                    printf("soma dos pares = %d\n", aux);
                }else{
                    break;
                }
            }
            soma = ini + fim;
            ini = fim;
            fim = soma;
        }

    printf("SOMA DOS PARES FINAL = %d\n", aux);
    getchar();
    return 0;
}
