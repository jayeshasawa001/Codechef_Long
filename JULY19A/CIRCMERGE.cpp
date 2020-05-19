#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define EB emplace_back

using namespace std;


ll dp1[900][900], sum1[900][900];

void print_mat(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << dp1[i][j] << '\t';
		}
		cout << '\n';
	}
}

ll given_n;

ll optimal_matrix_chain_order(ll n) {
    ll len, i, j, k, temp, cost, min_val;
	
    for (len = 1; len < n; len++) {
        for (i = 0; i < n - len; i++) {
            j = i + len;
            dp1[i][j] = LONG_MAX;
            for (k = i; k < j; k++) {
                cost = dp1[i][k] + dp1[k + 1][j] + sum1[i][k] + sum1[k+1][j];
                if (cost < dp1[i][j]) {
                    dp1[i][j] = cost;
                }
            }
        }
    }
    //cout << "-------------" << endl;
    //print_mat(n);
    ll ans = LONG_MAX;
    ll g = 0, h = given_n - 1;
    for(g = 0; h < n; g++, h++)
    {
    //	cout << ans << endl;
    //	cout << dp1[g][h] << endl;
    	ans = min(ans, dp1[g][h]);
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		given_n = n;
		dp1[2*n+6][2*n+6] = {0};
		sum1[2*n+6][2*n+6] = {0};
		for(int i = 0; i < 2*n + 6; i++)
		{
		    for(int j = 0; j < 2*n + 6; j++)
		    {
		        dp1[i][j] = 0;
		        sum1[i][j] = 0;
		    }
		}
		
		vector <ll> v;
		ll x;
		for(ll i = 0; i < n; i++)
		{
			cin >> x;
			v.push_back(x);
			sum1[i][i] = x;
		}
		
		for(ll i = 0; i < n - 1; i++)
		{
			v.push_back(v[i]);
		}
		
		n = n + n - 1;
		
		for(ll i = 0; i < n; i++)
		{
			sum1[i][i] = v[i];
		}
		
		ll len, i, j, k, temp, cost, min_val;
	
    for (len = 1; len < n; len++) {
        for (i = 0; i < n - len; i++) {
            j = i + len;
            min_val = LONG_MAX;
            for (k = i; k < j; k++) {
                cost = sum1[i][k] + sum1[k + 1][j];
                if (cost < min_val) {
                    min_val = cost;
                }
            }
            sum1[i][j] = min_val;
        }
    }		
		ll min1 = optimal_matrix_chain_order(n);		
		cout << min1 << endl;
	}
	return 0;
}