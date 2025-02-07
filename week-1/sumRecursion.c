//write a recursive function to calculate sum of integer functions
#include<stdio.h>
#include<stdlib.h>
int sum(int *arr,int n){
	if(n==0) return arr[0];
	else return arr[n]+sum(arr,n-1);
}

int main(){
	int arr[]={5,4,3,-1,2,-9,0,1,-6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int n;
	printf("Enter a n: ");
	scanf("%d",&n);
	if(n>=size || n<0) {
		printf("Invalid!");
		exit(0);
	}
	printf("The required sum is: %d\n",sum(arr,n));
	return 0;
}
