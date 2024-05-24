#include<stdio.h>
#include<string.h>

// Write a function named slice, which takes a string & retuns a sliced string from index n to m.

void sliced(char str[], int n, int m);

int main() {
    char str[] = "HelloWorld";
    sliced(str, 3, 6);

}

void sliced(char str[], int n, int m) {  // n & m are vslid value
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}