/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number? 104743 */
/*
#include <stdio.h>

    int main(){
        int i, j = 0;
        int cont = 0, contaprimo = 0;
        for (i = 2; i < 1000000; i++){
            if (i == 2){
            contaprimo++;
            continue;
            }
            if (i % 2 != 0){
                for(j = i; j > 0; j--){
                    if (i%j == 0){
                        cont++;
                    }
                }
            }
            if (cont == 2){
                contaprimo++;
                if(contaprimo == 10001){
                printf("%dnth numero primo: %d\n", contaprimo, i);
                break;
                }
                cont = 0;
            }
            cont = 0;
        }
        return 0;
    }

