#include <stdio.h>
#include <limits.h>


int main(void) {
    
    // what is the maximum possible integer?
    // print("%d\n", INT_MAX);

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int current = 7;
    long sum = 0;
    while (current <= n) {
        sum += current;
        current += 7;
    }

    printf("%ld\n", sum);

    return 0;
}