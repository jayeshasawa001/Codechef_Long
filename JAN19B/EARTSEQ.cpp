// EARTSEQ
#include <bits/stdc++.h>
#define MAX 615000
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	bool a[MAX]={0};
	long long int prm[50010];
	int k=0;
	for(int i=2;i<MAX&&k<50010;i++)
	{
		if(!a[i])
		{
			prm[k++]=i;
			for(int j=2*i;j<MAX;j+=i)
			{
				a[j]=1;
			}
		}
	}
	
	long long int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int z=n+3;
		long long int ans[z]={6,15,35},b=6;
		if(n>3)
		{
			ans[3]=77;
		}
		
		for(int i=4;i<n;)
		{
			ans[i]=143*prm[b];
			ans[i+1]=221*prm[b+1];
			ans[i+2]=77*prm[b+1];
			b+=2;
			i+=3;
		}
		
		ans[n-1]*=2;
		
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";	
		}
		cout<<endl;
	}
	
}