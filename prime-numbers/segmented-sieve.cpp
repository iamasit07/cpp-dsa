#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> Prime;

void sieve(ll n) {
	vector<bool> isPrime(n + 1, true);
	for (ll i = 2; i <= n; i++) {
		if (isPrime[i]) {
			Prime.push_back(i);
			for (ll j = (i * i); j <= n; j = j + i) {
				isPrime[j] = false;
			}
		}
	}
	cout << "\n";
}

void segsieve(ll l, ll h) {
	ll sq = sqrt(h);
	sieve(sq);
	vector<bool> isPrime((h - l + 1), true);
	for (ll p : Prime) {
		ll sm = (l / p) * p;
		if (sm < l)
			sm += p;
		for (ll m = sm; m <= h; m += p) {
			isPrime[m - l] = false;
		}
	}

	for (ll i = l; i <= h; i++) {
		if (isPrime[i - l]) {
			cout << i << " ";
		}
	}
	cout << "\n";
}

int main()
{
	segsieve(50, 100);

	return 0;
}