//Write a program to calculate the power of a number.

#include<stdio.h>

int main(){
	int base,expo;
	printf("Enter base , and exponent \n");
	scanf("%d%d",&base,&expo);
	int res=1;
	for(int i=0;i<expo;i++){
		res*=base;
	}
	printf("The power: %d",res);
	return 0;
}
