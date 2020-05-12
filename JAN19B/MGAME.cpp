// MGAME
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int p,n,t,ans,max,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		max=ceil((float)n/2)-1;
		if(n<=2)
		{
			cout<<p*p*p<<endl;
		}
		else
		{
			cout<<(p-n)*(p-n)+(p-n)*(p-max)+(p-max)*(p-max)<<endl;
		}
	}
	return 0;
}