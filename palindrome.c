#include <stdio.h>
int main (){
	int givennum;
	int r;
	int sum =0;
	int temporary;

	printf("ENTER A NUMBER TO CHECK IF ITS PALINDROME OR NOT : ");
	scanf("%d", 		&givennum);

	for (temporary=givennum ; givennum!=0; givennum= givennum/10 ){
		r = givennum%10;
		sum = 	sum*10 + r;
	}

	if (temporary==sum){
		printf("given number is a PALINDROME number \n", temporary);

	}
	else{
		printf("is not a PALINDROME");
}	}
