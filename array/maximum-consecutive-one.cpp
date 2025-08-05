#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n) {
	int count = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0)
			count = 0;
		else {
			count++;
			ans = max(ans, count);
		}
	}

	return ans;
}

int main() {
	int arr[] = {0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1};
	cout << count(arr, 12) << endl;
	return 0;
}