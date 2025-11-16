#include<stdio.h>
#include<string.h>

int main(){
	
	char alph[]="pwwkew";
	int i,maxi=1,temp=1,j;
	
	for(i=0 ; alph[i]!='\0' ; i++){
		
		printf("%c ",alph[i]);
	}
	printf("\n\n");
	
	for(i=0 ; alph[i]!='\0' ; i++){
		
		if(i>0 && alph[i-1] != alph[i]){
			
			for(j=i-1 ; j!=-1 ; j--){
				
				if(alph[j]==alph[i]){
				
					if(maxi>temp){
						temp=maxi;
					}
					maxi=1;
				}
			}
			maxi++;
		}
		else{
			
			if(maxi>temp){
				temp = maxi;
			}
			maxi=1;
		}

	}
	printf("%d",temp);
	
	
	
	
	
	
	return 0;
}
