#include<stdio.h>

// Ask the user to enter their firstName & print it back to them.

// also try with their fullName.

void printString(char arr[]);

int main() {
    // char firstName[50];
    // scanf("%s", firstName);
    // printf("your name is %s", firstName);

    char fullName[100];
    scanf("%s", fullName);
    printf("your full name is : %s", fullName);
    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}