#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n) {
    if (n == 0)
        return 1;
    
    int temp = pow(x, n / 2);
    temp = temp * temp;

    if (n % 2)
        return temp * x;
    return temp;
}

int main()
{
    cout << pow(2, 4);

    return 0;
}