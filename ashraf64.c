#include<stdio.h>

// Make a program to input student information from a user & enter it to a file

int main() {
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", name);
    printf("enter age : ");
    scanf("%s", &age);
    printf("enter cgpa : ");
    scanf("%s", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f", cgpa);

    fclose(fptr);
    return 0;
}