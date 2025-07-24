#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n) {
	int pos = 0;
	for (int i = 1; i < n; i++) {
		if (arr[pos] == arr[i])
			continue;

		arr[++pos] = arr[i];
	}

	return pos;
}

int main() {
	int arr[] = {1, 2, 2, 3, 3, 3, 3};
	cout << removeDuplicate(arr, 7);
	return 0;
}