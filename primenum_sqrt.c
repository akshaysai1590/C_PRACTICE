#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int IsPrime (int givennum){
    if (givennum <=1){
        return false;
    }
    for (int i =2; i<=sqrt(givennum) ; i++){
        if (givennum%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int givennum = 100;
    for (int j =1 ; j<= givennum ; j++){
        if (IsPrime(j)){
            printf("%d \n" ,j);
        }
    }
    return 0;
}
