/*Author-:Palak*/
/*
 * Only write code when you are sure of the approach .Remember of penalties!!
 * Do optimized thinking (Think which technique/observation can be used,deep drive into the problem!!).
 * Do post analysis after the contest./Upsolving is much more important than giving contest
 * Learn a technique and solve some problems if its new to you--->Solve as many as problems to be confident in those kinds of problem!!
 * DON'T GET STUCK ON ONE APPROACH,Move your mind in all directions
 *Remember who you are and your Capabilities!!
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
	//Corner case:
	if(n<=1)
	return false;
	if(n<=3)
	return true;

	//This optimizes the complexity:
	if(n%2==0||n%3==0)
	return false;
	for(ll i=5;i*i<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		return false;
	}
	return true;
}
ll solve(ll n,ll x,ll a[]){
	ll dp[n+1][x+1];
	memset(dp,0,sizeof(dp));
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=x;j++){
			if(i==1)
			{
				if(a[i]==0 ||a[i]==j)
                   dp[i][j]=1;
                   else
                   dp[i][j]=0;
			}
			else{
				if(a[i]==0 ||a[i]==j)
				dp[i][j]=((dp[i-1][j-1]+dp[i-1][j])%(1000000007)+dp[i-1][j+1])%1000000007;
				else
				dp[i][j]=0;
			}
		}
		
	}
	ll ans=0;
	for( ll i=1;i<=x;i++){
		ans=(ans+dp[n][i])%(1000000007);
		
	}
	return ans;
}
int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n+1];
	for(ll i=1;i<=n;i++)
	cin>>a[i];
	cout<<solve(n,x,a)<<endl;
	return 0;
}
	

