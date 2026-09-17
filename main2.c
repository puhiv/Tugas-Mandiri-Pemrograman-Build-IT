#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min, mid, max;

    if (a <= b && a <= c) {
        min = a;

        if (b <= c) {
            mid = b;
            max = c;
        }
         else {
            mid = c;
            max = b;
        }
    } 
    else if (b <= a && b <= c) {
        min = b;

        if (a <= c) {
            mid = a;
            max = c;
        } 
        else {
            mid = c;
            max = a;
        }
    } 
    else {
        min = c;

        if (a <= b) {
            mid = a;
            max = b;
        } 
        else {
            mid = b;
            max = a;
        }
    }
    int selisih1 = mid - min;
    int selisih2 = max - mid;
    
    if (selisih1 < selisih2) 
    {
        printf("%d\n", selisih1);
    } 
    else 
    {
        printf("%d\n", selisih2);
    }
    return 0;
}