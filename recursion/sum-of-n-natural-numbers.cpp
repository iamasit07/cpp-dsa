#include <bits/stdc++.h>
using namespace std;

int sumOfFirstNnaturalNum(int n) {
	if (n == 0)
		return 0;
	return n + sumOfFirstNnaturalNum(n - 1);
}

int main()
{
	cout << sumOfFirstNnaturalNum(5);

	return 0;
}