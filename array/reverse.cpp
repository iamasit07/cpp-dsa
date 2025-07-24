#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
	int start = 0, end = n - 1;
	while (start <= end) {
		int temp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	reverse(arr, 5);
	return 0;
}