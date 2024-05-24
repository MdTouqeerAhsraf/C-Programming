#include<stdio.h>
#include<string.h>

// Salting
// Find the salted form of a password entered by user if thesalt is "123" & added at the end.

void Salting(char password[]);

int main() {
    char password[100];
    scanf("%s", password);
    Salting(password);

}

void Salting(char password[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);  // newPass = "test"
    strcat(newPass, salt);  //newPass = "test" + "123"
    puts(newPass);

}