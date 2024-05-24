#include<stdio.h>
#include<math.h>

// print 1 (true) or 0 (false) for following statemenets :

// a) if it's sunday & it's snowing -> true
// b) if it's monday or it's raining -> true
// c) if a number is greater than 9 & less than 100 -> true  (2 digit number)

// int main() {
//     int isSunday = 0;
//     int isSnowing = 1;
//     printf("%d \n", isSunday && isSnowing);
//     return 0;
// }

// int main() {
//     int isMonday = 0;
//     int isRaining = 1;
//     printf("%d \n", isMonday || isRaining);
//     return 0;
// }

int main() {
    int x;
    printf("enter number : ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}