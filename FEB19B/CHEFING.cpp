// CHEFING
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
	string str="abcdefghijklmnopqrstuvwxyz\0";
	while(t--)
	{
		int a[26]={0};
		ll n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			sort(s[i].begin(), s[i].end());
			s[i].erase(std::unique(s[i].begin(), s[i].end()), s[i].end());
		}

		for(int i=0;i<26;i++)
		{
			for(int k=0;k<n;k++)
			{
				int l=s[k].length();
				for(int j=0;j<l;j++)
				{
					if(str[i]==s[k][j])
					{
						a[i]++;
						break;
					}
				}
			}
		}
		int cnt=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]==n)
			cnt++;
		}
		cout<<cnt<<endl;
	}
	
}