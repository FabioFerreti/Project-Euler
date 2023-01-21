//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>

    int main ()
    {
        long long num = 600851475143;
        int cont = 0, i, j;
        for (i = 1; i <= num/2; i++){

            if(num%i == 0){
                for (j = 1; j <= i; j++){
                    if (i%j == 0){
                        cont ++;
                    }
                }
                if (cont == 2)
                printf("Fator primo de %lld = %d\n", num, i);
                cont = 0;
            }
        }

        return 0;
    }

/*
int main() {
    long long n = 13195;


    long long maior_fator_primo = 1;
    long long i;
    for (i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            maior_fator_primo = i;
            n = n / i;
        }
    }

    if (n > maior_fator_primo) {
        maior_fator_primo = n;
    }

    printf("Maior fator primo: %lld\n", maior_fator_primo);

    return 0;
}
*/
