#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end) {
	while (start <= end) {
		int temp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = temp;
	}
}

void leftRotate(int arr[], int n, int d) {
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	leftRotate(arr, 6, 4);
	return 0;
}