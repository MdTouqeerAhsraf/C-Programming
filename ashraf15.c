#include<stdio.h>

// print the sum of first n natural number.
// n = 4

// Also, print them in reverse

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }

    printf("sum is %d", sum);

    for(int i=n; i>=1; i--) {
    printf("%d\n", i);
    }
    return 0;
}