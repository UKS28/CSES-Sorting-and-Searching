#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)



int main(){
    int n;
	cin>>n;
    vector<long long> vp(n);

	rep(0,n)
    {
	   cin>>vp[i];
	}
    
	long long ans=vp[0];
	long long curr=vp[0];
	rep(1,n)
	{
		curr=max(curr+vp[i],vp[i]);
        ans=max(ans,curr);
	}
	cout<<ans<<endl;
	return 0;
}