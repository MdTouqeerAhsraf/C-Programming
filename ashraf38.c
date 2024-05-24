#include<stdio.h>

// question-> find output
// int *ptr;
// int x;

// ptr = &x;
// *ptr = 0;

// ptr(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);

// *ptr += 5;
// printf(" x = %d\n", x);
// printf(" *ptr =  %d\n", *ptr);

// (*ptr)++;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);

int main () {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;  // 0

    printf("*x = %d\n", x);  //0
    printf("*ptr = %d\n", *ptr);  //0

    *ptr += 5;  // x = 5
    printf("*x = %d\n", x);  //5
    printf("*ptr = %d\n", *ptr);  //5

    (*ptr)++;
    printf("*x = %d\n", x);  //6
    printf("*ptr = %d\n", *ptr);  //6
    return 0;
}