// DEPCHEF
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1],d[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=a[0];
		for(int i=0;i<n;i++)
		{
			cin>>d[i];
		}
		
		int max=0;
		for(int i=1;i<n;i++)
		{
			if(a[i-1]+a[i+1]<d[i])
			{
				if(max<d[i])
				max=d[i];
			}
		}
		
		if(a[n-1]+a[1]<d[0])
		{
			if(max<d[0])
			max=d[0];
		}
		
		if(max==0)
		{
			cout<<-1<<endl;
		}
		else{
			cout<<max<<endl;
		}
	}
return 0;
}