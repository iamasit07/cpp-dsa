#include <bits/stdc++.h>
using namespace std;

void subsetOfString(string a, string b, int point) {
	int size = a.length();
	if (point >= size) {
		cout << b << " ";
		return;
	}

	subsetOfString(a, b, point + 1);
	subsetOfString(a, b + a[point], point + 1);
}

int main()
{
	subsetOfString("ABC", "", 0);
	return 0;
}