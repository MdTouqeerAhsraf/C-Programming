#include<stdio.h>

// write a function to convert celcius to fahrenheit.

float convertTemp(float celcuis);
int main() {
float far = convertTemp(0);
printf("far : %f", far);
return 0;
}


float convertTemp(float celcuis) {
    float far = celcuis * (9.0/5.0) + 32;
    return far;
}
