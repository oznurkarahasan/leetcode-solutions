/*
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *arr, size, area, maxi=0,i,j;
	
	printf("boyut: ");
	scanf("%d",&size);
	
	arr = (int *) malloc(size * sizeof(int));
	
	if(arr == NULL){
		
		printf("bellek tahsis edilemedi.");
	}
	else{
		
		printf("elemanlar: ");
				
		for(i=0 ; i<size ; i++){
			
			scanf("%d",&arr[i]);
		}
		
		for(i=0 ; i<size ; i++){
		
			area = 0;
		
			for(j=i+1 ; j<size ; j++){
			
				if(arr[i]<arr[j]){
				
					area = arr[i] * (j-i);
			
					if(area>maxi){
				
						maxi = area;
					}
				}
				else{
				
					area = arr[j] * (j-i);
				
						if(area>maxi){
					
							maxi = area;
						}
				}
			}
		}
	}
	printf("%d",maxi);
	
	free(arr);
	return 0;
}
