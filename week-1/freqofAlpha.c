//calculate frequency of a alphabate in a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char str[100];
	int freq[26]={0};
	printf("Enter your string(with lower case character only): ");
	scanf("%s",&str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		freq[str[i]-'a']++;
	}
	
	printf("freq of each char: \n");
	
	for(int i=0;i<26;i++){
		if(freq[i]>0){
			printf("%c --> %d \n",i+'a',freq[i]);
		}
	}
	return 0;
}
