#include<stdio.h>
// print the value 'i' from its pointer to pointer
int main() {
int i = 5;
int *ptr = &i;
int **pptr = &ptr;

printf("%d\n", **pptr);
return 0;
}