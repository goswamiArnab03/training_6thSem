//C program to check Armstrong number.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isArm(int n,int count){
	int temp=0;
	int k=n;
	while(n>0){
		temp+=(int)(pow(n%10,count));
		n/=10;
	}
	return temp==k;
}

int main(){
	int n;
	printf("Enter a no\n");
	scanf("%d",&n);
	int count=0;
	int k=n;
	while(n>0){
		count++;
		n/=10;
	}
	if(isArm(k,count)){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
	
