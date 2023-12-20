#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)

int main(){
    int n,k;
	cin>>n>>k;
     
	vector<pair<int,int>> v(n);
	rep(0,n)
	cin>>v[i].first,v[i].second=i;

	int i=0,j=n-1;
	sort(v.begin(),v.end());

	while(i<j)
	{
        if(v[i].first+v[j].first==k)break;

		if(v[i].first+v[j].first>k)j--;
		else i++;
	} 

	if(i<j)
	cout<<v[i].second+1 <<" "<< v[j].second+1<<endl;
	else 
	cout<<"IMPOSSIBLE\n";
	return 0;
}

