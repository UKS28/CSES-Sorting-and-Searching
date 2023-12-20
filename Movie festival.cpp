#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)

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
    
	sort(vp.begin(),vp.end());

	int ans=1;
	int last=vp[0].second;
	rep(1,n)
	{
		if(last<=vp[i].second)
		   ans++,last=vp[i].second;
	}
	cout<<ans<<endl;
	return 0;
}

