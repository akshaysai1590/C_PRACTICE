#include <stdio.h>

int main() {
    int i, j, isPrime ;
    int maxlimit 100;

    for (i = 2; i <= maxlimit; i++) { 
        isPrime = 1;             

        for (j = 2; j < i; j++) {  
            if (i % j == 0) {
                isPrime = 0;      
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);    
        }
    }

    return 0;
}
