#include <bits/stdc++.h>
using namespace std;
#define rep(k,z) for(int i=k;i<z;i++)

int main(){
    int n , m;
	cin>>n>>m;
	// multiset as we need to store element in sorted order with duplicates
	//  and we need to erase some element in the process. 
	multiset<int> mlti;
	rep(0,n)
	{
		int k;
		cin>>k;
		mlti.insert(k);
	}
	
	vector<int> ans(m,-1);
	rep(0,m)
	{
		int k;
		cin>>k;
        if(mlti.size()==0)continue;
        
		// upper bound > element
		auto itr=mlti.upper_bound(k);
		if (itr == mlti.begin())
		ans[i]=-1;

		else 
		{
			// cout<<*itr<<"u  ";
			ans[i]=*(--itr);
			mlti.erase(itr);
		}
	}

	rep(0,m)
	// {   cout<<i<<" "<<ans[i]<<endl;
		cout<<ans[i]<<endl;
	// }
	return 0;
}

