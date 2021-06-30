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
ll findLargest(ll n){
	ll res=0;
	while(n>0){
		ll m=n%10;
		res=max(res,m);
		n=n/10;
	}
	return res;
}
int main()
{
	ll n;
	cin>>n;
	vector<ll>dp(n+1);
	dp[0]=0;
	for(ll i=1;i<=n;i++){
		ll temp=i;
		ll step=1e6+1;
		while(temp!=0){
		ll di=temp%10;
		temp=temp/10;
		if(di==0)
		continue;
		step=min(step,1+dp[i-di]);
		}
		dp[i]=step;
	}
	cout<<dp[n]<<endl;
}
	

