#include<stdio.h>

// swap 2 numbers, a & b.

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 5;
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);

return 0;

}

// call bye reference
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}