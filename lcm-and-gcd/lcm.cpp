#include<bits/stdc++.h>
using namespace std;

int gcdBetter(int a, int b) {
	if (b == 0)
		return a;
	return gcdBetter(b, a % b);
}

int lcmBetter(int a, int b) {
	return (a * b) / gcdBetter(a, b);
}

int main() {
	cout << lcmBetter(16, 38);
	return 0;
}