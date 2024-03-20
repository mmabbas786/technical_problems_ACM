#include<iostream>
#include<vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    bool flag = true;
    for(int i=1;i<n;i++)
    {
        a[i]-=2*a[i-1];
        a[i+1]-=a[i-1];
        a[i-1]=0;
        if(a[i]<0 || a[i+1]<0)
        {
            flag = false;
            break;
        }
    }

    if(flag && a[n-1]==0 && a[n-2]==0)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main(){
    int t;
    cin >> t; // Input number of test cases

    while (t--) {
        solve();
    }
    return 0;
}


/*
Output :
1 no of test cases
5 input array elements
1
3
3
5
2
YES
*/