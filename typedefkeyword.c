#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    float cgpa;
    char name;

} stu ;
typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

int main() {
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "shradha");

    printf("student name is %s\n", s1.name);

    return 0;

}
