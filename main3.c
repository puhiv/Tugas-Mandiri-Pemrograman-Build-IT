#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int *coin = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }
    qsort(coin, n, sizeof(int), compare);
    const long long MOD = 1000000007;
    long long total = (long long)n * (n - 1) / 2;
    long long sama = 0;
    long long banyak = 1;
    for (int i = 1; i < n; i++) {
        if (coin[i] == coin[i - 1]) {
            banyak++;
        }
        else {
            sama += banyak * (banyak - 1) / 2;
            banyak = 1;
        }
    }
    sama += banyak * (banyak - 1) / 2;
    long long jawaban = total - sama;
    printf("%lld\n", jawaban % MOD);
    free(coin);
    return 0;
}