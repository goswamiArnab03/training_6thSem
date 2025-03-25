/*Consider the below series:
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, ...
This series is a mixture of 2 series – all the odd terms in the series form a Fibonacci series
and all
the even terms are the prime numbers in ascending order.
Write a program to find the Nth term in the series.*/



#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
	if(n==0 || n==1 ) return 1;
	return fibo(n-1)+fibo(n-2);
}

bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
	
int primes(int n){
	int prime=2;
	int i=3;
	while(n){
		if(isPrime(i)){
			prime=i;
			n--;
		}
		i++;
	}
	return prime;
}

bool isInteger(string& input) {
    for (char ch : input) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int main(){
	string input;
	cin>>input;
	stringstream ss(input);
	int N;
	try{
		if(!isInteger(input) || !(ss>>N)){
		 	throw runtime_error("ERROR!");
		}
		if(N%2==0){
			cout<<primes(N/2-1)<<endl;
		}
		else{
			if(N==1){
				cout<<"1"<<endl;
			}
			else{
				cout<<fibo(N/2);
			}
		}
	}
	catch (const exception& e) {
        
        cout << e.what() << endl;
    }
	return 0;
}
