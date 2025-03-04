#include<stdio.h>

int main(){
	int k=13;
	for(int i=0;i<4;i++){
		int m=k;
		for(int j=0;j<4;j++){
			printf("%d ",m);m++;
		}
		k-=4;
		printf("\n");
	}
	return 0;
}
