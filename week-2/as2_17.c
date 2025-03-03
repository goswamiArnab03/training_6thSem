//C program to check whether a number can be expressed as sum of two prime numbers.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}



int main(){
	int n;
	printf("Enter a no(>=2): ");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++){
		if(isPrime(i) && isPrime(n-i)){
			printf("Yes!\n");
			return 0;
		}
	}
	printf("No!\n");
	return 0;
}
