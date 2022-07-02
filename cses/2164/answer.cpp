#include<bits/stdc++.h>
using namespace std;

long long solve(long long n,long long k){
	if(k<=(n+1)/2){
		if(n%2==0){
			return k*2;
		}
		if(k==(n+1)/2){
			return 1;
		}
		return k*2;
	}
	else{
		if(n%2==0){
			return solve(n/2,k-(n/2))*2-1;
		}
		return solve(n/2,k-((n+1)/2))*2+1;
	}
}

int main(){
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		long long k,n;
		cin>>n>>k;
		long long result=solve(n,k);
		cout<<result<<endl;
	}
}
