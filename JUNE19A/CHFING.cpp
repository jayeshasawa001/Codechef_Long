
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
#define mod 1000000007
using boost::multiprecision::cpp_int; 
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int g;
	cin>>g;
	while(g--)
	{
	    cpp_int n, k, t;
	    cin >> n >> k;
	    t = (k + n - 2) / (n - 1);
	    cout << (k*t - ((t-1)*t*n)/2 + ((t-2)*(t-1))/2 - 1) % mod << endl;
	}
	return 0;
}
