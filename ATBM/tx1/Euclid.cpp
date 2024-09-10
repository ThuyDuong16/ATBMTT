#include<bits/stdc++.h>

using namespace std;

int powerMod(int a, int b, int m)
{
    int res = 1;
    a = a % m;
    while(b>0)
    {
        if(b&1)
            res = (res * a) % m;

        a = a * a;
        b = b >> 1;
    }
    return res;
}
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    cout << powerMod(a, b, n);
    return 0;
}
