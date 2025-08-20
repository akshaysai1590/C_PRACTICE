#include <stdio.h>

int main() {
    int givennum;
    int temporary;
    int n = 0;
    int result = 0;
    int remainder;
    int powerofnum;

    printf("ENTER A NUMBER: ");
    scanf("%d", &givennum);

    for (temporary = givennum;temporary != 0;temporary /=10) {
        n++;
    }
    // Armstrong 
    for (temporary = givennum;temporary != 0;temporary /= 10) {
        remainder = temporary % 10;
        powerofnum = 1;
        for (int i = 0; i < n; i++) {
            powerofnum *= remainder;
        }
        result += powerofnum;
    }

    printf("THE ARMSTRONG NUMBER IS : %d \n", result);

    return 0;
}
