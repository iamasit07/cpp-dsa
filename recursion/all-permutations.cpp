#include<bits/stdc++.h>
using namespace std;

void permutation(string s, int i) {
	int n = s.length();
	if (i == n - 1) {
		cout << s << " ";
		return;
	}

	for (int j = i; j < n; j++) {
		swap(s[i], s[j]);
		permutation(s, i + 1);
		swap(s[j], s[i]);
	}
}

int main() {
	permutation("ABC", 0);
	return 0;
}