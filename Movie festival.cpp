#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)

bool cust(pair<int,int> &a,pair<int,int> &b)
{
	if(a.second<b.second) return true;
	return false;
}

int main(){
    int n;
	cin>>n;
    vector<pair<int,int>> vp;

	rep(0,n)
    {
	   int a,b;
	   cin>>a>>b;
       vp.push_back({a,b});
	}
    
	sort(vp.begin(),vp.end(),cust);

	int ans=1;
	int last=vp[0].second;
	rep(1,n)
	{
		// cout<<last<<"l";
		if(last<=vp[i].first)
		   {ans++;last=vp[i].second;}
	}
	cout<<ans<<endl;
	return 0;
}