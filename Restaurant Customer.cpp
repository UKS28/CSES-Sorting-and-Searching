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
       vp.push_back({a,1});
	   vp.push_back({b,-1});
	}
    
	sort(vp.begin(),vp.end());
    
	int cnt=0,res=0;
	rep(0,2*n)
    {
		cnt+=vp[i].second;
		res=max(res,cnt);
	} 
		cout<<res<<endl;
	return 0;
}

