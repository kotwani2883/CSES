#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int dp[5002][5002];
int ed(string &a,string &b,int n,int m){
	if(n<0)
	return m+1;
	if(m<0)
	return n+1;
	if(dp[n][m]!=-1)
	return dp[n][m];
	else{
		if(a[n]==b[m])
		return dp[n][m]=ed(a,b,n-1,m-1);
		else
	return 	dp[n][m]=1+min(ed(a,b,n,m-1),
	           min(ed(a,b,n-1,m),ed(a,b,n-1,m-1)));
	}
}
int main(){
	string a,b;
	cin>>a>>b;
	memset(dp,-1,sizeof(dp));
	int  n=a.length(),m=b.length();
	cout<<ed(a,b,n-1,m-1)<<endl;
	return 0;
}
