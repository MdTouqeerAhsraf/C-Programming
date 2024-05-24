#include<stdio.h>

// write a function to count the number of odd number in N arry.

int countOdd(int arr[], int n);


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d \n", *(arr+2));
    printf("%d \n", *(arr+5));
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i=0; i<=n; i++) {
        if(arr[i] % 2 != 0) {  // odd
            count++;
        }
    }
    return count;
}