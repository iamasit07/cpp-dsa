#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n) {
	if (n == 0)
		return;
	print1ToN(n - 1);
	cout << n << " ";
}

int main()
{
	print1ToN(10);

	return 0;
}