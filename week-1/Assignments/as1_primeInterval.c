//C program to display prime numbers between two intervals.

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isPrime(int n){
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int a,b;
	printf("Enter the start: ");
	scanf("%d",&a);
	printf("Enter the end: ");
	scanf("%d",&b);
	if(a<=1 || b<a){
		printf("Invalid range\n");exit(0);
	}
	printf("The primes are: ");
	for(int i=a;i<=b;i++){
		if(isPrime(i)){
			printf("%d ",i);
		}
	}
	return 0;
}
