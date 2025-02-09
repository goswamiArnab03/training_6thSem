//Write a program to display the sequence 7, 10, 8, 11, 9, 12, .................

#include<stdio.h>

int main(){
	int n=10;
	
	for(int i=0,a=7;i<n;i++,a++){
		int b=a+3;
		printf("%d, %d, ",a,b);
	}
	return 0;
}
