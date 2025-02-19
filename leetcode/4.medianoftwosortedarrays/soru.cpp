#include<stdio.h>
#include<stdlib.h>

void bubblesort(int nums3[], int size3){
	
	int i,j,temp;
	
	for(i=0 ; i<size3 ; i++){
				
		for(j=1 ; j<size3 ; j++){
					
			if(nums3[j]<nums3[j-1]){
						
				temp = nums3[j-1];
				nums3[j-1] = nums3[j];
				nums3[j] = temp;
			}
		}
	}
	
}
int main(){
	
	int *nums1, *nums2, *nums3,size1,size2,size3,i,k,j,temp;
	float avr=0;
	
	printf("birinci ve ikinci dizenin boyutunu giriniz:  ");
	scanf("%d %d",&size1,&size2);
	
	nums1 = (int *) calloc (size1 , sizeof(int));
	nums2 = (int *) calloc (size2, sizeof(int));
	
	if(nums1==NULL && nums2==NULL){
		
		printf("bellek tahsis edilemedi.");
	}
	else{
		printf("birinci dizenin elemanlari: ");
	
		for(i=0 ; i<size1 ; i++){
		
			scanf("%d",&nums1[i]);
		}
		
		printf("ikinci dizenin elemanlari: ");
		
		for(i=0 ; i<size2 ; i++){
		
			scanf("%d",&nums2[i]);
		}
		size3 = size1+size2;
		
		nums3 = (int *) calloc(size3, sizeof(int));
		
		for(i=0 ; i<size1 ; i++){
			
			nums3[i] = nums1[i];
		}
		k=i;
		for(k=0 ; k<size2 ; k++){
			
			nums3[i] = nums2[k];
			i++;
		}
		if(size3 % 2 == 0){
			
			bubblesort(nums3,size3);
			
			for(i=size3/2 ; i != (size3/2)-2 ; i--){
				
				avr += nums3[i];
			}
			printf("ortalama: %.1f", avr/2);
		}
		else{
			
			bubblesort(nums3,size3);
			i = size3 / 2;
			printf("ortalama: %d",nums3[i]);
		}
	}
	free(nums1); free(nums2); free(nums3);
	
	return 0;
}
