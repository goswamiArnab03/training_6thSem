//C program to find the sum of first n prime numbers.

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	printf("Enter n:");
	int n;scanf("%d",&n);
	if(n<=1){
		printf("Enter a valid no\n");
		exit(0);
	}
	int sum=0;
	for(int i=2;i<=n;i++){
		if(isPrime(i))sum+=i;
	}
	printf("The required sum is: %d",sum);
	return 0;
}
