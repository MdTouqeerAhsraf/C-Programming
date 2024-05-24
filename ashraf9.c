#include<stdio.h>

// write a program to check if a student passed or failed 
// marks >30 is paas
// marks <=30 is fail

int main() {
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d", &marks);

    // if(marks >= 0 && marks <= 30) {
    //     printf("FAIL \n");
    // } else if(marks > 30 && marks <= 100) {
    //     printf("PaSS \n");
    // } else {
    //     printf("wrong marks");
    // }


    // ternary opertor
    marks <=30 ? printf("FAil \n") : printf("PASS \n");
    return 0;
}