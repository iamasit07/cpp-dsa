#include<bits/stdc++.h>
using namespace std;

void leader(int arr[], int n) {
	int prev = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (i == n - 1) {
			cout << arr[i] << " ";
			prev = arr[i];
			continue;
		}
		if (arr[i] > prev) {
			cout << arr[i] << " ";
			prev = arr[i];
		}
	}
}

int main() {
	int arr[] = {10, 4, 5, 3, 2, 1};
	leader(arr, 6);
	return 0;
}