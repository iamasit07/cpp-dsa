#include<bits/stdc++.h>
using namespace std;

int gcdBetter(int a, int b) {
	if (b == 0)
		return a;
	return gcdBetter(b, a % b);
}

int main() {
	cout << gcdBetter(16, 38);
	return 0;
}