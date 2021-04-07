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
        for(int j = 0; j < a.size(); j++){
            while(a[i] != a[j]){
                if(a[i] + a[j] == b){
                    cout << "true" << endl;
                    break;
                }
            }
        }
    }
}

int main() {
    vi a;
    ll t, n, x;
    cin >> t;
    while(t!= 0){
        cin >> x;
        a.pb(x);
        t--;
    }
    cin >> n;
    sort(a.begin(), a.end());
    if(n < a[0] ){cout << "false" << endl;}
    else {solve(a, n);}
    return 0;
}