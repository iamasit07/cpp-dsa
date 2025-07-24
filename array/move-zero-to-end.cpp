#include <bits/stdc++.h>
using namespace std;

void moveZero(int arr[], int n) {
	int pos = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i]) {
			swap(arr[pos], arr[i]);
			pos++;
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[] = {1, 3, 5, 4, 0, 78, 0, 6};
	moveZero(arr, 8);
	return 0;
}