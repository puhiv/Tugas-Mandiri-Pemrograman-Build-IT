#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    long long total = 0;
    long long a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        total += a[i];
    }
    
    if (total < 0) {
        total = -total;
    }
    
    printf("%lld\n", total);
    return 0;
}