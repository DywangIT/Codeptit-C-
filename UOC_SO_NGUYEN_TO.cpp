#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
typedef long long ll;

void pt(ll n)
{
    for(ll i = 2; i * i <= n; i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n != 1) cout << n;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        pt(n);
    }
    return 0;
}
