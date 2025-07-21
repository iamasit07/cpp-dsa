#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c) {
	if (n == 1) {
		cout << "Move 1 from " << a << " to " << c << endl;
		return;
	}

	towerOfHanoi(n - 1, a, c, b);
	cout << "Move " << n << " from " << a << " to " << c << endl;
	towerOfHanoi(n - 1, b, a, c);
}

int main() {
	towerOfHanoi(3, 'A', 'B', 'C');
	return 0;
}