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
int main()
{
	ll n;
	cin>>n;
	ll dp[n+1][n*n];
	dp[0][0]=1;
	 for(ll i=1;i<=((n*n)/2);i++)
	  dp[0][i]=0;
	  for(ll i=1;i<=n;i++){
	  	for(ll j=0;j<=(n*(n+1)/4);j++)
	  	{
	  		dp[i][j]= ((j<i) ? 0: (dp[i-1][j-i])+dp[i-1][j])%(1000000007);
		  }
	  }
	  if((n*(n+1))%4)
	  cout<<0<<endl;
	  else
	  cout<<dp[n][(n*(n+1))/4]/2<<endl;
	  return 0;
	
}
