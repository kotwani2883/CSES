#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	
		ll n;
	cin>>n;
	vector<ll>dp(n+1,0);

	dp[0]=1;
	for(ll i=1;i<=n;i++)
	{
		for(int x=1;x<=6;x++){
		if(x>i)
		break;
		dp[i]=(dp[i]+dp[i-x])%(1000000007);
	}
	}
	cout<<dp[n]<<endl;
	return 0;
	
	
}
