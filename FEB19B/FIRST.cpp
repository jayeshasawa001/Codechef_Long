// Was ACCepted due to their weak test cases. It has a flaw.
// First problem of FEB LONG 19B
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
		ll n,a,b,k,cnt=0;
		cin>>n>>a>>b>>k;
		
		if(__gcd(a,b)==1)
		cnt=n/a+n/b-2*(n/(a*b));
		
		else{
			cnt=abs(n/a-n/b);
		}
		if(cnt>=k)
		cout<<"Win"<<endl;
		else cout<<"Lose"<<endl;
		
	}
return 0;
}