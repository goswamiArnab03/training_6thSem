#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void merge(int arr[],int low,int mid,int high){
	int i=low;
	int j=mid+1;
	int k=low;
	int b[1000];
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]) b[k++]=arr[i++];
		else b[k++]=arr[j++];
	}
	while(i<=mid)b[k++]=arr[i++];
	while(j<=high)b[k++]=arr[j++];
	for(int i=low;i<=high;i++){
		arr[i]=b[i];
	}
}


void sort(int arr[],int low,int high){
	if(low<high){
		int mid=low+(high-low)/2;
		sort(arr,low,mid);
		sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

/*void rsort(int arr[],int n,int start){
	for(int i=start;i<n-1;i++){
		bool flag=false;
		for(int j=start;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=arr[j];
				flag=true;
			}
		}
		if(!flag)
			break;
		
	}
}*/


int main(){
	int n;
	printf("Enter array length: ");scanf("%d",&n);
	int arr[n];
	int newarr[n];
	printf("Enter a array: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,0,n-1);
	//rsort(arr,n,n/2);
	if(n%2!=0){
		for(int i=0;i<=n/2;i++){
			newarr[i]=arr[i];
		}
		for(int i=n-1,j=n/2;i>=n/2;i--,j++){
			newarr[j]=arr[i];
		}
	}
	else{
		for(int i=0;i<n/2;i++){
			newarr[i]=arr[i];
		}
		for(int i=n-1,j=n/2;i>=n/2;i--,j++){
			newarr[j]=arr[i];
		}
	}
	
	printf("The array is: ");
	for(int i=0;i<n;i++){
		printf("%d ,",newarr[i]);
	}
	
	
	return 0;
}
