#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)

long long calc(vector<long long> &v,long long diff)
{
	int n=v.size();
	long long ans=0;
	rep(0,n)
	ans+=abs(v[i]-diff);

	return ans;

}

int main(){
    int n;
	cin>>n;
    vector<long long> v(n);
	cin>>v[0];
    long long mn=v[0],mx=v[0];
	
	rep(1,n)
    {
	   cin>>v[i];
	   mn=min(mn,v[i]);
	   mx=max(mx,v[i]);
	  
	  
	}
    
	long long l=mn-1,h=mx+1;
	while(h-l>2)
	{
      long long mid1=l+(h-l)/3;
	  long long mid2=h-(h-l)/3;
    //   cout<<l<<" "<<h<<endl; 
	  long long ans1=calc(v,mid1);
	  long long ans2=calc(v,mid2);
      
	  if(ans1>ans2)
	  {
		l=mid1;
	  }
	  else if(ans2>ans1)
	  {
		h=mid2;
	  }
	  else{
		l=mid1;
		h=mid2;
	  }
	}
    
	cout<<calc(v,(l+h)/2)<<endl;
    
	return 0;
}