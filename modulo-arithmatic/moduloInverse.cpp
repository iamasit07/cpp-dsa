#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcdExtended(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

void moduloInverse(int a, int m){
	int x, y;
	int g = gcdExtended(a, m, x, y);
	if(g!= 1)
		cout << "Inverse does not exist";
	else
		cout << x;
}

int main(){

	return 0;
}