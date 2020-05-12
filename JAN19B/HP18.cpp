// HP18
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int a,b,n,i,t=0,x,ali=0,bob=0;
	cin>>t;
	while(t--)
	{
		ali=0,bob=0;
		cin>>n>>a>>b;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x%a==0)
			{
				bob++;
				continue;
			}
			else if(x%b==0)
			{
				ali++;
				continue;
			}
		}
		
		if(a==b||bob>ali)
		cout<<"BOB"<<endl;
		else
		cout<<"ALICE"<<endl;
	}

	return 0;	
}