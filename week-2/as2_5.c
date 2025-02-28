//C program to count number of digits in an integer.

#include<stdio.h>

int main(){
	int n;
	printf("Enter a no\n");
	scanf("%d",&n);
	int count=0;
	while(n>0){
		count++;
		n/=10;
	}
	printf("The no of digits has: %d",count);
	return 0;
}
