//C program to check whether a number is palindrome or not.

#include<stdio.h>

int main(){
		int n;
	printf("Enter a no\n");
	scanf("%d",&n);
	int k=n;
	int temp=0;
	while(n>0){
		temp=temp*10+n%10;
		n/=10;
	}
	if(temp==k){
		printf("The no is palindrom\n");
	}
	else{
		printf("The no is not palindrom\n");
	}
	return 0;
}
