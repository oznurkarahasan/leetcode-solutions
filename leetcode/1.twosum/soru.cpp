/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *nums,size,i,sum,j;
	
	printf("dizinin boyutunu giriniz: ");
	scanf("%d",&size);
	
	nums = (int *) malloc(size * sizeof(int));
	
	printf("dizinin elemanlarini giriniz: ");
	
	if(nums==NULL){
		
		printf("bellek tahsis edilemedi.");
	}
	else{
		
		for(i=0 ; i<size; i++){
			scanf("%d",&nums[i]);
		}
	
		printf("target: ");
		scanf("%d",&sum);
	
		for(i=0 ; i<size ; i++){
		
			for(j=i+1 ; j<size; j++){
			
				if(nums[i]+nums[j] == sum){
					printf("[%d,%d]\n",i,j);
				}
			}
		}
	}
	free(nums);
	return 0;
}
