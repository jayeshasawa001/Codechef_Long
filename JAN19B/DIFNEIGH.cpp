// DIFNEIGH
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n,m,t,count;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n>>m;
		if(m==1&&n==1)
		{
			cout<<1<<endl;
			cout<<1<<endl;
			continue;
		}
		else if(m==1&&n==2)
		{
			cout<<1<<endl;
			cout<<1<<endl;
			cout<<1<<endl;
			continue;
		}
		else if(n==1&&m==2)
		{
			
			cout<<1<<endl;
			cout<<1<<" "<<1<<endl;
			continue;
		}
		else if(m==2&&n==2)
		{
			cout<<2<<endl;
			cout<<1<<" "<<1<<endl;
			cout<<2<<" "<<2<<endl;
			continue;
		}
		
		else if(n==1||m==1){
			cout<<2<<endl;
			int count1=1,count2=0;
			if(n==1)
			for(int i=1;i<=m;i++)
			{
				if(count1<=2)
				{
					cout<<1<<" ";
					count1++;
					count2=0;
				}
				else{
					cout<<2<<" ";
					count2++;
					if(count2==2)
					{
						count1=1;
					}
				}
			}
			else{
				for(int i=1;i<=n;i++)
				{
					if(count1<=2)
					{
						cout<<1<<endl;
						count1++;
						count2=0;
					}
					else{
						cout<<2<<endl;
						count2++;
						if(count2==2)
						{
							count1=1;
						}
					}
				}
			}
			cout<<endl;
			continue;
		}
		
		else{
			if(m<3||n<3){
			cout<<3<<endl;
				if(n<3)
				{
					for(int i=1;i<=n;i++)
					{
						for(int j=1;j<=m;j++)
						{
							if(j%3!=0)
							cout<<j%3<<" ";
							else{
							cout<<3<<" ";
							}
						}
						cout<<endl;
					}
				}
				else{
					for(int i=1;i<=n;i++)
					{
						for(int j=1;j<=m;j++)
						{
							if(i%3!=0)
							cout<<i%3<<" ";
							else{
							cout<<3<<" ";
							}
						}
						cout<<endl;
					}
				}	
			}
			
			else{
				cout<<4<<endl;
				long long int count1,count2=0,counti=-1,countj=0,flag=1;
				for(int i=1;i<=n;i++)
				{
					counti++;
						if(flag==0)
						{
							flag=1;
							count1=3;
							count2=0;
						}
						else
						{
							flag=0;
							count1=1;
							count2=0;
						}
					if(counti==2)
					{
						counti=0;
						if(flag==0)
						{
							flag=1;
							count1=3;
							count2=0;
						}
						else
						{
							flag=0;
							count1=1;
							count2=0;
						}
					}
					for(int j=1;j<=m;j++)
					{
						if(count1<=2)
						{
							if(counti==0)
							cout<<1<<" ";
							else cout<<3<<" ";
							count1++;
							count2=0;
						}
						else{
							if(counti==0)
							cout<<2<<" ";
							else cout<<4<<" ";
							count2++;
							if(count2==2)
							{
								count1=1;
							}
						}
					}
					cout<<endl;
				}
			}
			continue;
		}
	}
	
}