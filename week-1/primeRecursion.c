//Check if a integer is prime or not using recursion
#include<stdio.h>
int isPrime(int n,int i){
	if(n<=1) return 0;
	if(n==2 || n==3 ) return 0;
	if(i==1) return 1;
	else if(n%i==0) return 0;
	else return isPrime(n,i-1);
}

int main(){
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	if(isPrime(n,n/2)){
		printf("Prime");
	}
	else printf("not prime");
	return 0;
}
