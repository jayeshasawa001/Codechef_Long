#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define F first
#define S second
#define PB push_back
#define MAX 100005

const ll mod = (ll)1e9 + 7;
using namespace std;

ll a[MAX][11];

// a[i][j]  represents i as no. of digits AND j as sum in interval with start j = 2 means all digits Staring with 2
// a[i][10] has sum of all digits upto i digits

ll powers_of_ten[MAX*2];
ll cumulative[MAX][11]; //Cumulative sum. 
	
void precompute()
{
	ll sum = 0, tmp = 0, x = 0, x1;
	memset(a, 0, sizeof(a));
	memset(cumulative, 0, sizeof(cumulative));
	
	powers_of_ten[0] = 1;
	
	for(int i = 1; i < MAX * 2; i++)
	{
		powers_of_ten[i] = (powers_of_ten[i-1] * 10) % mod;
	}
	
	for(ll i = 1; i < MAX; i++)
	{
		tmp = 0;
		for(ll j = 1; j < 10; j++)
		{
			x = (j * powers_of_ten[2*i - 2]) % mod;
			x1 = (i > 1) ? ((j * powers_of_ten[2*i - 4]) % mod) : 0;
			a[i][j] = ((a[i-1][10] % mod) + x + mod - x1) % mod;
			sum = (sum + a[i][j]) % mod;
			tmp = (a[i][j]+tmp) % mod;
			cumulative[i][j] = sum;
		}
		a[i][10] = sum;
		a[i][0] = tmp;
		cumulative[i+1][0] = sum;
	}
//	
//	for(int i = 0; i < MAX; i++)
//	{
//		for(int j = 0; j < MAX; j++)
//		{
//			cout << cumulative[i][j] << " ";
//		}
//		cout << endl;
//	}
}

ll get_digit(char x)
{
	return (ll)(x - '0');
}

ll calculate_weight(string s, ll n) //Takes reverse String
{
	ll ans = 0, sum_of_digits = 1, new_digit;
	for(ll i = 0; i < n; i++)
	{
		new_digit = get_digit(s[i]);
		ans = (ans + (powers_of_ten[i] * new_digit * sum_of_digits) % mod) % mod;
		if(new_digit != 0) 
		{
			ans= (ans + cumulative[i+1][new_digit-1]) % mod;
			if(i < n-1)
			{
				if('1' <= s[i+1] && s[i] > s[i+1])
					ans = (mod + ans - ((get_digit(s[i+1])) * powers_of_ten[2*i]) % mod) % mod;
				else if(s[i+1] == s[i])
					ans = (mod + ans - (new_digit * powers_of_ten[i] * sum_of_digits) % mod) % mod;
				else ;
			}
		}
		sum_of_digits = (powers_of_ten[i] * new_digit + sum_of_digits) % mod;
	}
	return ans;
}

int main()
{	
	fio;
	precompute();	
	ll t;
	cin >> t;
	while(t--)
	{
		string l, r, tmp;
		ll nl, nr;
		cin >> nl >> l >> nr >> r;
		
		// [L, R] = (R) - (L-1)
		//Doing L-1 
		
		reverse(l.begin(), l.end());
		if(l[0] > '0')
			l[0] -= 1;
		else{
			ll i = 0;
			for(i = 0; l[i] == '0' && i < nl; i++)
			{
				l[i] = '9';
			}
			l[i] -= 1; 
			while(nl > 0 && l[nl-1] == '0')
			{
				l[nl-1] = 0;
				nl--;
			}
			//cout << l << endl;
			
		}// "L" String is reversed Here.....				
				
		ll ansL = calculate_weight(l, nl);
		reverse(r.begin(), r.end());
		ll ansR = calculate_weight(r, nr);
		
		cout << (ansR - ansL + mod) % mod << endl;
	}
	return 0;
}