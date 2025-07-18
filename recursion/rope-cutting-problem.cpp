#include <bits/stdc++.h>
using namespace std;

int ropeCuts(int n, int a, int b, int c) {
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	int res = max(ropeCuts(n - a, a, b, c), max(ropeCuts(n - b, a, b, c), ropeCuts(n - c, a, b, c)));
	if (res == -1)
		return -1;
	return res + 1;
}

int main()
{
	cout << ropeCuts(23, 12, 9 , 11);
	return 0;
}