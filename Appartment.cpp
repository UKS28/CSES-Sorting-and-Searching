#include <bits/stdc++.h>
using namespace std;


int main(){
    
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> desire(n),available(m);
	for(int i=0;i<n;i++)
	cin>>desire[i];

	for(int i=0;i<m;i++)
	cin>>available[i];
     
	sort(desire.begin(),desire.end());
	sort(available.begin(),available.end());

	int cnt=0;
    int j=0;
	for(int i=0;i<n && j<m;i++)
	{
		while( j<n && available[j]<desire[i]-k)
		{
            j++;
		}
		if(j<n && available[j]>=desire[i]-k && available[j]<=desire[i]+k)
		{
			cnt++;
			j++;
		}
	}
	
	cout<<cnt<<endl;

}

