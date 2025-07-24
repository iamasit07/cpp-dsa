#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n) {
	int pos = 0;

	for (int i = 0; i < n; i++) {
		if (arr[pos] < arr[i])
			pos = i;
	}

	return pos + 1;
}

int main()
{
	int arr[] = {1, 23, 52, 112};
	cout << largestElement(arr, 4);
	return 0;
}