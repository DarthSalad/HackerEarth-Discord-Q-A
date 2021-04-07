#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "
#define imax INT_MAX
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;

void solve(ll n, ll y){
    if(n < y){cout << "NO" << endl;}
    else{cout << "YES" << endl;}
}

int main() {
    ll n, y;
    cin >> n >> y; cin.ignore();
    ll a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        solve(a[i], y);
    }
    return 0;
}