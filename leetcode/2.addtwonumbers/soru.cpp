/*
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *arr1,*arr2,*arr3,size1,size2,temp,num1=0,num2=0,sum,i,rem,size3=0;
	
	printf("1. ve 2. dizinin boyutu: ");
	scanf("%d %d",&size1,&size2);
	
	arr1 = (int *) malloc(size1 * sizeof(int));
	arr2 = (int *) malloc(size2 * sizeof(int));
	
	printf("\n1. dizinin elemanlari: ");
	 
	for(i=0 ; i<size1 ; i++){
		scanf("%d",&arr1[i]);
	}

	printf("2. dizinin elemanlari: ");
	
	for(i=0 ; i<size2 ; i++){
		scanf("%d",&arr2[i]);
	}
	
	for(i=size1-1 ; i!=-1 ; i--){
		
		temp = arr1[i];
		num1 = (num1*10) + temp;
		
	}

	for(i=size2-1 ; i!=-1 ; i--){
		
		temp = arr2[i];
		num2 = (num2*10) + temp;
	}

	sum = num1+ num2;
	
	arr3 = (int *) malloc(size3 * sizeof(int));
	
	for(i=0 ; sum>0 ; i++){
		
		rem = sum%10;
		arr3[i] = rem;
		sum /= 10;
		size3++;
		
	}
	printf("\nsonuc = [");
	for(i=0 ; i<size3 ; i++){
		
		printf("%d",arr3[i]);
		
		if(i==size3-1){
			continue;
		}
		else{
			printf(", ");
		}
	}
	printf("]");
	
	free(arr1); free(arr2); free(arr3);
	
	return 0;
}
