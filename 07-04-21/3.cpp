#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "
#define imax INT_MAX
#define pb push_back
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<string> vs;

void solve(vi a, ll b){
    for(int i = 0; i < a.size(); i++){
        int l = b - a[i];
        if(count(a.begin(), a.end(), l) != 0) {
            cout << "true" << endl;
            break;
        } 
    }
}

int main() {
    vi a;
    ll t, n, x;
    cin >> t;
    while(t--){
        cin >> x;
        a.pb(x);
    }
    cin >> n;
    sort(a.begin(), a.end());
    if(n < a[0] ){cout << "false" << endl;}
    else {solve(a, n);}
    return 0;
}