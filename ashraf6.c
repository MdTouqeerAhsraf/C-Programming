#include<stdio.h>
#include<math.h>

// write a program to check if a number is odd or even
// even->1
// odd->0
int main() {
 int x;
 printf("enter a number : ");
 scanf("%d", &x);
 printf("%d", x % 2 == 0);
return 0;

}