/*Find the difference between the sum of the squares of the
first one hundred natural numbers and the square of the sum.*/

#include <stdio.h>

int main()
{
    int somaQuadrados = 0, quadradoSoma = 0, aux = 0;

    for (int i = 1; i<=100; i++){
        somaQuadrados += i*i;
        aux += i;
        quadradoSoma = aux*aux;
    }
    printf("Diferença entre quadradoSoma e somaQuadrado = %d\n", quadradoSoma - somaQuadrados);

    getchar();
    return 0;
}
