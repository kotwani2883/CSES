#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	vector<int>seq;
	seq.push_back(a[0]);
	for(int i=1;i<n;i++)
	{
		if(seq.back()<a[i])
		seq.push_back(a[i]);
		else{
			ll ind=lower_bound(seq.begin(),seq.end(),a[i])-seq.begin();
			seq[ind]=a[i];
		}
}cout<<seq.size()<<endl;
return 0;
}
