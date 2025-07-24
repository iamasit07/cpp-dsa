#include <bits/stdc++.h>
using namespace std;

bool sortedCheck(int arr[], int n) {
	for (int i = 0; i < (n - 1); i++) {
		if (arr[i] > arr[i + 1])
			return false;
	}
	return true;
}

int main() {
	int arr[] = {1, 2, 4, 3, 5};
	cout << sortedCheck(arr, 5);
	return 0;
}