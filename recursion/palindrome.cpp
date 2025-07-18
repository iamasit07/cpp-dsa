#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end) {
	if (start >= end)
		return true;

	return (s[start] == s[end]) && isPalindrome(s, start + 1, end - 1);
}

int main()
{
	cout << isPalindrome("abba", 0, 3);
	return 0;
}