/*C program to display Armstrong number between two intervals.*/

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

int dig(int n){
	int count=0;
	while(n>0){
		count++;
		n/=10;
	}
	return count;
}

int main(){
	int l,u;
	printf("Enter a lower bound\n");
	scanf("%d",&l);
	printf("Enter a upper bound\n");
	scanf("%d",&u);
	printf("all armstrongs are: ");
	for(int i=l;i<=u;i++){
		if(isArm(i,dig(i))){
			printf("%d ",i);
		}
	}
	return 0;
}
