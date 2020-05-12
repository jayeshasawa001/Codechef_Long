// XYPIZQ
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned long long int t,n,p,x,y,z;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n>>p>>x>>y>>z;
		unsigned long long int tmp,l=2*n+1;
		switch(p)
		{
			case 1:
				if(x<y&&y<z||x>y&&y>z){
					tmp=__gcd(l-z,l);
					cout<<(l-z)/tmp<<" "<<l/tmp<<endl;
				}
				else {
					tmp=__gcd(z,l);
					cout<<(z)/tmp<<" "<<l/tmp<<endl;
				}
				break;
				
			case 2:
				tmp=__gcd(l-2*y,l);
				cout<<(l-2*y)/tmp<<" "<<l/tmp<<endl;
				break;
				
			case 3:
				if(x<y&&y<z||x>y&&y>z){
					tmp=__gcd(l-x,l);
					cout<<(l-x)/tmp<<" "<<l/tmp<<endl;
				}
				else {
					tmp=__gcd(x,l);
					cout<<(x)/tmp<<" "<<l/tmp<<endl;
				}
				break;
				
			case 4:
				tmp=__gcd(l-2*y,l);
				cout<<(l-2*y)/tmp<<" "<<l/tmp<<endl;
				break;
		}
	}
}
