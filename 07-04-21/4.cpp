#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "
#define imax INT_MAX
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;

void solve(ll a, ll b){
    if(b%a==0) {cout << "Yes" << endl;}
    else {cout << "No" << endl;}
}

int main() {
    ll t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}