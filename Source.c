#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");

    int N, K;
    double sum = 0.0;

    printf("¬ведите число N: ");
    scanf("%d", &N);

    printf("¬ведите число K: ");
    scanf("%d", &K);

    for (int i = 1; i <= N; i++) {
        sum += pow(i, K); 
    }

    printf("–езультат вычислений: %.0lf\n", sum);

    return 0;
}
