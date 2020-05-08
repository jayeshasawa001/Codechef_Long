// CHFINTRO
#include <iostream>
using namespace std;

int main()
{
	int n,t,r;
	cin>>n>>t;
	while(n--)
	{
		cin>>r;
		if(r<t)
		{
			cout<<"Bad boi"<<endl;	
		}
		else{
			cout<<"Good boi"<<endl;
		}
	}
return 0;
}