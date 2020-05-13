// ARTBALAN 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fun(int a[],ll l, int n)
{
	if(l==n) return 0;
	if(l==a[0]) return 0;
	
	ll p=l,q,ans;
	if(l<=26) p=l-n;
	q=l-a[0];
	
	ans=min(p,q);
	
	ll cnt=l+1;
	for(ll i=l;i>=1;i--)
	{
		//cout<<"Loop i--->"<<i<<endl;

		if(l%i!=0)
		{
		//	cout<<"Debugger--->>>>"<<endl;
		
		//	cout<<"N--->"<<n<<"I----->"<<i<<"L---->"<<l<<endl;
			continue;
		}
		//continue;
		int tmp=n;
		if(n/i<l&&l<18){
			
			if(i==2||i==3)
			{
				tmp+=1;
			}
		}
		ll y=l/i;
		//cout<<"Y--->"<<y<<"I---->"<<i<<endl;
		for(ll j=0;j<=tmp-y;j++)
		{
			ll pos=0,neg=0;;
			for(ll k=0;k<y;k++)
			{
				ll x=i-a[j+k];
				if(x>0) pos+=x;
				if(x<0) neg+=x;
	//	cout<<"POS--->"<<pos<<"NEG---->"<<neg<<"X--->"<<x<<endl;
			}
			ll mi=max(pos,neg);
	//	cout<<"Mi---->"<<mi<<endl;
			cnt=min(mi,cnt);
	//		cout<<"CNT---->"<<cnt<<endl;
		}
		ans=min(cnt,ans);
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		int a[26]={0};
		string s;
		cin>>s;
		
		ll l=s.length();
		for(ll i=0;i<l;i++)
		{
			int p=(int)s[i]-65;
			a[p]++;
		}
		
		sort(a,a+26,greater<int>());
		
		int n=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]==0)
			break;
			else n++;
		}

		cout<<fun(a,l,n)<<endl;
	}
	return 0; 
}