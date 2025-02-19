/*
Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21
*/


#include<stdio.h>

int main(){
	
	int num, reverse;
	
	printf("number: ");
	scanf("%d",&num);
	
	if(num<0){
		
		printf("new number: -");
		num *= -1;
	}
	else{
		
		printf("new number: ");
	}
	for( ; num>0 ; ){
		
		if(num % 10 == 0){
			num /= 10;
			continue;
		}
		reverse = num % 10;
		printf("%d",reverse);
		num /= 10;
 	}
		
		
	return 0;
}
