//Write a program to display the sequence A1, B2, C3, ...., Y25, Z26, A1, B2, ...............

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n = 100;
	int i=0;
	while(n--){
		printf("%c%d, ",'A'+i,i+1);
		i++;
		i=i%26;
	}
	return 0;
}
