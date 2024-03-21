// Setting Up Camp (Codeforces)

#include<bits/stdc++.h>


using namespace std;

void solve()
{
    int a , b, c;
    cin >> a >> b >> c;

    long ans = a;
    ans += b/3;
    b %= 3;

    if (b>0 && 3-b > c)
    {
        cout << -1 << endl;
        return;
    }

    if(b>0)
    {
        ans++;
        c -= 3-b;
    }
    b=0;
    ans += (c+2)/3;

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t; // Input number of test cases

    while (t--) {
        solve();
    }
    return 0;
}


/*
OUTPUT :
2 no. of test cases

1
3
2

3 ans

19
7
18

28 ans

*/