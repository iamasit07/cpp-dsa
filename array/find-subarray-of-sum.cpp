#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int target) {
	int start = 0, sum = arr[0];

	for (int end = 1; end < n; end++) {
		while (sum > target and start < end - 1) {
			sum -= arr[start];
			start++;
		}

		if (sum == target)
			return true;
		if (end < n)
			sum += arr[end];
	}

	return (sum == target);
}

int main() {
	int arr[] = {1, 4, 20, 3, 10, 5};
	cout << isPresent(arr, 6, 33);
	return 0;
}