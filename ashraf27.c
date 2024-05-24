#include<stdio.h>

// writ 2 function-one to print "Hello" & second to print "good bye".

#include<stdio.h>
// declaration/prototype
void printHello();
void printGoodbye();

int main() {
    printHello();  //function call
    printGoodbye();
    return 0;
    
}

// fuction defination 
void printHello() {
    printf("Hello!\n");
}

void printGoodbye() {
    printf("Goodbye:)\n");
}