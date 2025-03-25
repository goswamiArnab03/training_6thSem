/*The problem is quite simple. You're given a number N and a positive integer K. Tell if N can
be
represented as a sum of K prime numbers (not necessarily distinct).*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n<=1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==2) return false;
	}
	return true;
}

string canbe(int n,int k){
	if(n<2*k) return "No";
	if(k==1){
		return (isPrime(n)) ? "Yes" : "No";
	}  
	if(k==2){
		if(n%2==0 || isPrime(n-2)){
			return "Yes";
		}
		else {
			return "No";
		}
	}
	return "Yes";
}

int main(){
	int t;
	cin>>t;
	vector<string> res;
	while(t--){
		int n,k;
		cin>>n>>k;
		res.push_back(canbe(n,k));
	}
	for(string s : res){
		cout<<s<<endl;
	}
	return 0;
}			

