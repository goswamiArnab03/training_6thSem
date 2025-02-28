//Write a C program to find the sum of digit of a number.

#include<stdio.h>
int main(){
	int n;
	printf("Enter a no\n");
	scanf("%d",&n);
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	printf("The sum is: %d",sum);
	return 0;
}
