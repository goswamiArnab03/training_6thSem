//C program to reverse a number.

#include<stdio.h>

int main(){
	int n;
	printf("Enter a no\n");
	scanf("%d",&n);
	int temp=0;
	while(n>0){
		temp=temp*10+n%10;
		n/=10;
	}
	printf("The reveresed no is: %d",temp);
	return 0;
}
