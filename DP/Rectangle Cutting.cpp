#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll w,h;
	cin>>w>>h;
	vector<vector<ll>>dp(w+1,vector<ll>(h+1));
	for(ll i=0;i<=w;i++){
		for(ll j=0;j<=h;j++){
			if(i==j)
			dp[i][j]=0;
			else{
				dp[i][j]=INT_MAX;
				//Vertical Cut
				for(ll k=1;k<i;k++)
				dp[i][j]=min(dp[i][j],1+dp[k][j]+dp[i-k][j]);
				//Horizontal Cut
				for(ll k=1;k<j;k++)
				dp[i][j]=min(dp[i][j],1+dp[i][k]+dp[i][j-k]);
			}
		}
	}
cout<<dp[w][h]<<endl;
return 0;
}
