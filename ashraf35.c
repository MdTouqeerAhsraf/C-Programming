#include<stdio.h>

// write a function to calculate percentage of a student from marks in science, maths & snaskit.

int calcPercentage(int science, int math, int snanskrit);

int main() {
int sc = 98;
int math = 95;
int sanskrit = 99;


printf("percentageni is : %d", calcPercentage(sc, math, sanskrit));
return 0;
}

int calcPercentage(int science, int math, int snanskrit) {
    return ((science + math + snanskrit) / 3);
}