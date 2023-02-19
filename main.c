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

/*
#include <math.h>
#include <stddef.h>
#include <stdio.h>

int is_prime(size_t n);

int main(void) {
	size_t nth_prime = 2;
	size_t prime_count = 0;

	while (prime_count != 10001) {
		if (is_prime(nth_prime)) prime_count++;
		nth_prime++;
	}
	nth_prime--; // cause of the last ++ after calculating the 10001st prime
	printf("The 10001st prime number is: %zu", nth_prime);
}

int is_prime(size_t n) {
	if (n < 2) return 0;
	if (n == 2 || n == 3) return 1;
	for (size_t i = 2; i <= (int)(sqrtl(n)) + 1; i++)
		if (n % i == 0) return 0;
	return 1;
}
*/

#include <stdio.h>
#include <math.h>

#define	divisible(x, y)		!(remainder((x),(y)))

/* Find the 10001th prime number */

int main(int argc, char *argv[]) {
	double nthPrime(double n);
	printf("--- %.1f\n", nthPrime(10001.0));
	return 0;
}

double nthPrime(double n) {
	int prime(double n);
	register double primes = 1;
	register double d = 1;
	if(n == 1)
		return 2;
	while(primes < n) {
		d += 2;
		if(prime(d))
			primes++;
	}
	return d;
}

int prime(double n) {
	double sqrt(double x);
	register double d = 3;
	register rt;
	if(n < 2)
		return 0;
	if(n == 2)
		return 1;
	if(divisible(n, 2))
		return 0;
	rt = sqrt(n);
	while(d <= rt) {
		if(divisible(n, d))
			return 0;
		d += 2;
	}
	return 1;
}
