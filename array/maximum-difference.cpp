#include <bits/stdc++.h>
using namespace std;

int maximumDifference(int arr[], int n) {
	int ans = 0, maxVal = 0, minVal = INT_MAX;
	for (int i = 0; i < n; i++) {
		minVal = min(minVal, arr[i]);
		maxVal = max(maxVal, arr[i]);

		ans = max(ans, maxVal - minVal);
	}
	return ans;
}

int main() {
	int arr[] = {1, 2, 3, 5, 6, 77};
	cout << maximumDifference(arr, 6);

	return 0;
}