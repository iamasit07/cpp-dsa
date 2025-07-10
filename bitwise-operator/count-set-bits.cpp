#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// void countSetBits(int n) {
//     int ans = 0;
//     while (n > 0) {
//         ans++;
//         n >>= 1;
//     }

//     cout << ans;
// }


// Better Solution
// void countSetBits(int n){
//     int ans = 0;
//     while(n > 0){
//         n = n&(n-1);
//         ans++;
//     }

//     cout << ans;
// }


// Best Solution
int table[256];

void initialise() {
    table[0] = 0;
    for (int i = 1; i < 256; i++)
        table[i] = (i & 1) + table[i / 2];
}

int countSetBits(int n) {
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}

int main() {
    initialise();
    cout << countSetBits(1033);
    return 0;
}