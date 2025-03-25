#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v[i]=x;
	}
	sort(v.begin(),v.end());
	int left=0,right=n-1;
	cout<<"Required array"<<endl;
	while(left<right){
		cout<<v[left++]<<" ";
		cout<<v[right--]<<" ";
	}
	if(left==right) cout<<v[left];
	cout<<endl;
	return 0;
}
