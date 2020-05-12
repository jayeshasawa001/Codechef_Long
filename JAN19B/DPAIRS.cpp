// DPAIRS
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n,m,x,count=0,minm=0,maxm=0;
	cin>>n>>m;
	
	long long int t=max(n,m);
	long long int a[n],b[m];
	
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];		
	}
	minm=distance(a,min_element(a,a+n));
	for(long long int i=0;i<m;i++)
	{
		cin>>b[i];
		cout<<minm<<" "<<i<<endl;
	}
	maxm=distance(b,max_element(b,b+m));
	for(long long int i=0;i<n;i++)
	{
		if(i==minm)
		continue;
		else cout<<i<<" "<<maxm<<endl;
	}
	
	return 0;
}