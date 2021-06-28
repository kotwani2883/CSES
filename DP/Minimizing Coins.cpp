#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n,x;
	cin>>n>>x;
	ll coins[n];
	for(ll i=0;i<n;i++)
	cin>>coins[i];
   ll dp[1000001];
	for(ll i=1;i<=x;i++)
	dp[i]=INT_MAX;
	dp[0]=0;
	for(ll i=1;i<=x;i++){
		for(ll j=0;j<n;j++){
			if(i-coins[j]>=0)
			dp[i]=min(dp[i],1+dp[i-coins[j]]);
		}
	}
	if(dp[x]==INT_MAX)
	dp[x]=-1;
	cout<<dp[x]<<endl;
}
