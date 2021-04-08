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
    int j = 0;
    ll l = 0, r = a.size() - 1;
    if(a.size()==0 || a.size()==1) {j = 0;}
    while(l < r){
        ll sum = a[l] + a[r];
        if(sum == b){
            j = 1;
            break;
        }
        else if(sum < b){
            l++;
        }
        else{
            r--;
        }
    }
    if(j == 1) {cout << "true" << endl;}
    else {cout << "false" << endl;}
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