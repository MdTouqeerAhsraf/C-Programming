#include<stdio.h>

// will the address output be same?
void printAddress(int n);

// int main() {
//     int n = 4;

//     printf("%p\n", &n);
//     printAddress(n);

//     return 0;

// }

// void printAddress(int n) {
//     printf("%p\n", &n);
// }

void printAddress(intn);

int main() {
    int n = 4;
    printAddress(n);
    printf("address of n is : %u\n", &n);
    return 0;

}

void printAddress(int n) {
    printf("address of n is : %u\n", &n);
}