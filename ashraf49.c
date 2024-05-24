#include<stdio.h>

// string ka ques.
// create a string firtName & lastName to store detail of user & print all print all the charcters using a loop'

void printString(char arr[]);

int main() {
    char firtName[] = "Touqeer";
    char lastName[] = "Ashraf";

    printString(firtName);
    printString(lastName);
    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}