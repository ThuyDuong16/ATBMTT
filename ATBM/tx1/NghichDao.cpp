#include<bits/stdc++.h>

using namespace std;

int modInverse(int a, int b)
{
    for(int i = 1 ; i <= b; i++)
    {
        if(a*i % b == 1) return i;
    }
    return 0;
}

int gcd(int a, int b) {
    int x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1 != 1) {
        int q = a1 / b1;
        //if(a1 % b1 == 0) return x1;
        tie(x, x1) = make_pair(x1, x - q * x1);
        tie(y, y1) = make_pair(y1, y - q * y1);
        tie(a1, b1) = make_pair(b1, a1 - q * b1);
    }
    return x1;
}

int main()
{
    float A = 9, M = 26;
    cout << modInverse(A, M) << endl;
    cout << gcd(8,29);
    return 0;
}
