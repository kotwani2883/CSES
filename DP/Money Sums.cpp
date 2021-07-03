#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int n;
	cin>>n;

	set<int>s;
	while(n--){
		int x;
		cin>>x;
	if(s.size()==0)	{
	s.insert(x);
	continue;
}
vector<int>temp;
for(auto it:s){
	temp.push_back(it+x);
}
s.insert(x);
for(int i=0;i<temp.size();i++)
s.insert(temp[i]);
	}
	cout<<s.size()<<endl;
	for(auto it:s)
	cout<<it<<" ";
	cout<<endl;
	return 0;
}
