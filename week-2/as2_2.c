//Write a C program to check whether a number is perfect or not.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	int temp=0;
	for(int i=1;i<=n/2;i++){
		if(!(n%i)) temp+=i;
	}
	if(temp==n){
		printf("This is perfect\n");
	}
	else{
		printf("This is not\n");
	}
	return 0;
}
