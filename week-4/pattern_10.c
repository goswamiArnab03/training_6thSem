#include<stdio.h>

int main(){
	int k=9,m=3;
	for(int i=0;i<4;i++){
		int x=k;
		for(int j=0;j<4-i;j++){
			printf("%d ",x);
			x++;
		}
		k-=m;
		m--;
		printf("\n");
	}
	return 0;
}
		
