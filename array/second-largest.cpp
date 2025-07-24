#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
	int pos = 0, ans = -1;
	for (int i = 0; i < n; i++) {
		if (arr[pos] < arr[i]) {
			ans = pos;
			pos = i;
		}
		else if (arr[ans] != arr[i]) {
			if (ans == -1 || ans < arr[i])
				ans = i;
		}
	}

	return ans + 1;
}

int main()
{
	int arr[] = {1, 23, 52, 112};
	cout << secondLargest(arr, 4);
	return 0;
}