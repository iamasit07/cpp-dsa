#include <bits/stdc++.h>
using namespace std;

// For one number occuring odd number of times
// void oddAppearingNumber(vector<int> &a) {
//     int ans = 0;
//     for (auto i : a)
//         ans ^= i;

//     cout << ans;
// }


// for two numbers occuring odd number of times
void oddAppearingNumber(vector<int> &a) {
    int ans = 0, x = 0, y = 0;
    for (auto i : a)
        ans ^= i;

    int rb = ans & ~ans;
    for (auto i : a) {
        if (i & rb)
            x ^= i;
        else
            y ^= i;
    }

    cout << x << " " << y;
}

int main() {
    vector<int> a;
    return 0;
}