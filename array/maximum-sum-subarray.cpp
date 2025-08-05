#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n) {
	int maxVal = 1, ans = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] % 2 != arr[i] % 2) {
			maxVal++;
			ans = max(ans, maxVal);
		}
		else
			maxVal = 1;
	}

	return ans;
}

int main() {
	int arr[] = {5, 10, 20, 6, 3, 8};
	cout << maxSubarray(arr, 7);

	return 0;
}