#include<stdio.h>

// keep taking numbers as input from user untill user enters a number which is multiple of 7.

int main() {
    int n;
    do {
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0) {
            break;
        }
    } while(1);
    printf("Thank you\n");
    return 0;
}