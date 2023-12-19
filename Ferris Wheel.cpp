#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)

int main(){
    
	int n,x;
	cin>>n>>x;

	vector<int> v(n);
	
	rep(0,n)
	cin>>v[i];

	sort(v.begin(),v.end());

    int i=0,j=n-1,cnt=0;
	while(i<=j)
	{
		if(v[i]+v[j]>x)j--;
		else
		i++,j--;
		
		cnt++;
	}
    
	cout<<cnt<<endl;
	return 0;
}

