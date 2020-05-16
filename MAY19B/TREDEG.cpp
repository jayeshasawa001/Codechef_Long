// TREDEG
#include <bits/stdc++.h>
#define IOIOIO ios_base::sync_with_stdio(0); cin.tie(NULL);	cout.tie(NULL)
#define ll long long
#define mod 998244353
using namespace std;

ll fp(ll base, ll power) {
    ll result = 1;
    base=base%mod;
    while(power > 0) {
        if(power % 2 == 1) {
            result = (result*base) % mod;
        }
        base = (base * base) % mod;
        power=power>>1;
    }
    return result;
}

ll modInverse(ll a)
{
    return fp(a, mod-2);
}

int main()
{
	IOIOIO;
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		ll n2, n3, n4, n5, n6, p;
		ll q = fp(n, n - 2);
		switch(n)
		{
			case 2:
				p = 1;
				break;
			case 3:
				p = (fp(2, k) * 3) % mod;
				break;
			case 4:
				p = ((12*fp(4, k)) % mod + (4*fp(3,k)) % mod) % mod;
				break;
			case 5:
				p = ((60*fp(8, k)) % mod + (5*fp(4, k)) % mod + (60*fp(6, k)) % mod) % mod;
				break;
			case 6:
				p = ((360*((fp(16, k) + 2*fp(12, k))) % mod) + (120*fp(8, k)) % mod + (90*fp(9, k)) % mod + (6*fp(5, k)) % mod) % mod;
				break;
			case 7:
				p = ((2520 * ((fp(32, k) + fp(24, k) + fp(18, k)) % mod)) % mod + (5040 * fp(24, k)) % mod + (630 * fp(18, k)) % mod + (1260 * fp(16, k)) % mod + (420 * fp(12, k)) % mod + (210 * fp(10, k)) % mod + (7 * fp(6, k)) % mod + (840 * (fp(24, k) + fp(16, k))) % mod) % mod;		
				break;
			default:
				p = 1;
				break;
		}
		cout << (p * modInverse(q)) % mod << endl;
	}
	return 0;	
}