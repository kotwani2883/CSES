#include <bits/stdc++.h> 
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

int main()
{
    fast_io;

    ll n,x;
    ll mod = 1e9+7;
    cin>>n>>x;

    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];

    vector <ll> dp(x+1,0);
    dp[0] = 1; 
    
    for(ll i=0;i<n;i++)//we take each coin specifically, and do the needed calculations
    {
        for(ll j=0;j<=x;j++)//we build numbers from 0 to sum, using the taken coin i.e- coin[i]
        {
            if(j-arr[i] >= 0)
            {
            dp[j] += dp[j-arr[i]];
            dp[j] %= mod;
            }
        }
    }
    cout<<dp[x]<<endl;

    return 0;
}
