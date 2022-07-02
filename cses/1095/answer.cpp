#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;

long long mypower(long long m,long long y){
	if(y==0){
		return 1;
	}
	long long p=mypower(m,y/2);
	p*=p;
	p%=mod;
	if(y&1==1){
		p=1ll*p*m;
	}
	p%=mod;
	return p;
}

int main()
{
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a,b;
		cin>>a>>b;
		cout<<mypower(a,b)<<endl;
	}
}
