#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    bool running = 0;
    ll sum = 0, l = 0, r = -1, cnt = 0;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += abs(v[i]);

        if (v[i] < 0 && !running){
            l = i;
            running = 1;
            cnt++;
        }
        else if (v[i] > 0 && cnt){
            r = i-1;
            running = 0;
        }
    }
    
    cout<<sum<<" "<<cnt;
}

int main()
{
    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
