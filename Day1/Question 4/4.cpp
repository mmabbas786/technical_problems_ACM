// Rudolf And Ugly String

#include<bits/stdc++.h>
using namespace std;
#define nl endl
typedef long long ll;

void solve() {
    int n, ans = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n - 2; ) {
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            ans++;
            i += 3; // Move to the next character after "pie"
        }
        else if (i + 4 < n && s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e') {
            ans++;
            i += 5; // Move to the next character after "mapie"
        }
        else if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
            ans++;
            i += 3; // Move to the next character after "map"
        }
        else {
            i++; // Move to the next character
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t; // Input number of test cases

    while (t--) {
        solve();
    }
    return 0;
}

/*
OUPUT :
2 no of test cases

8
mapiepie

2 ans


10
mapmapmap

3 ans

*/