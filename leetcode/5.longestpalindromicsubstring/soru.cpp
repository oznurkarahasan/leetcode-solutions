#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
Input: s = "babad"
Output: "bab"
*/

/*
Given a string s, return the longest palindromic substring in s.
Time: O(n^2)
Space: O(1)
*/

char *longestPalindrome(char *s){
    
	int pos = 0;
    int lenmax = 1;
    
	for (int i=0; s[i]!='\0'; i++){
        int g=i, d=i;
        while (g>=0 && s[d]!='\0' && s[g]==s[d]){        
            g-=1;
            d+=1;
        }
        d--;
        g++;
        if (d-g>=lenmax){
            lenmax=d-g+1;
            pos=g;
        }
        g=i,d=i+1;
        while (g>=0 && s[d]!='\0' && s[g]==s[d]){
            g-=1;
            d+=1;
        }
        d--;
        g++;
        
        if (d-g>=lenmax){
            lenmax=d-g+1;
            pos=g;
        }
    }
    char* new_s = (char*)malloc(sizeof(char)*(lenmax+1));
    new_s[lenmax]='\0';
    for (int i=0; i<lenmax; i++){
        new_s[i]=s[i+pos];
    }
    return new_s;
}
int main(){
	
	char word[] = "cbbd"; 
	
	printf("%s",longestPalindrome(word));
	
}


/*
int main(){
	
	char word[] = "babad"; 
	
	int i, j, len = 0, flag = 0;
	
	while(word[len] != '\0'){
		len++;
	}
	
	for(i=0 ; i<len/2 ; i++){
		
		for(j=0 ; j<len/2 ; j++){
			
			if(word[i] == word[len - j - 1]){
				
				break;
			}
		}
	
	}
	
	
	return 0;
}*/


