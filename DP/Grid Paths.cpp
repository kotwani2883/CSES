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
	int n;
	cin>>n;
	int a[n+1][n+1];
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++)
		{
			char ch;
			cin>>ch;
			if(ch=='.')
			a[i][j]=0;
			else
			a[i][j]=1;
		}
	}
	int dp[n+1][n+1];
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(i==n && j==n)
			dp[i][j]=1;

			else {
				int op1= (j==n) ? 0 : dp[i][j+1];
				int op2= (i==n) ? 0 : dp[i+1][j];
				 if(a[i][j]!=1)
				dp[i][j]=(op1+op2)%(1000000007);
			     else
			    dp[i][j]=0;
			}
		}
	}
	if(a[n][n]==1)
	cout<<0<<endl;
	else
	cout<<dp[1][1]<<endl;
	return 0;
}

