#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n) {
    if (n == 0)
        return 1;

    int res = 1;
    while (n > 0) {
        if (n % 2)
            res = res * x;
        x = x * x;
        n >>= 1;
    }

    return res;
}

int main()
{
    cout << pow(2, 4);

    return 0;
}