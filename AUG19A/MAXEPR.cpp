#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define EB emplace_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--)       
	{
		int n;
		cin >> n;
		double k[n], c[n], sumkc = 0, tmp;
		double x[n], d = 0, sum_rec_k = 0;

		for(int i = 0; i < n; i++)
		{
			cin >> k[i];
		}
		
		for(int i = 0; i < n; i++)
		{
			cin >> c[i];
			sumkc += k[i] * c[i];
		}		
	
		for(int i = 0; i < n; i++)
		{
			tmp = 1/k[i];
			sum_rec_k += tmp;
		}
		
		if(sumkc < 0)
		{
			cout << -1 << endl;
			continue;
		}
		
		d = (double)sqrt((double) sumkc / sum_rec_k);
		double f = d * sum_rec_k;		
		double d_2 = d*d;
		
		for(int i = 0; i < n; i++)
		{
			x[i] = (d_2 / (k[i] * k[i])) - c[i];
		}
		
		
		int flag = 0;
		for(int i = 0; i < n; i++)
		{
			if(x[i] + c[i] < 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 1)
		{
			cout << -1 << endl;
			continue;
		}
		
		else{
			cout << setprecision(9) << f << " ";
			for(int i = 0; i < n; i++)
			{
				cout << setprecision(9) << x[i] << " "; 
			}
			cout << endl;
		}
	}
	return 0;
}