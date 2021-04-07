#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "
#define imax INT_MAX
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;

void solve(int n){
    ll m = n, sum=0;
    while(m != 0){
        int rem = m % 10;
        sum += rem;
        m = m/10;
    }
    cout << sum << endl;
}

int main() {
    ll n;
    cin >> n; cin.ignore();
    solve(n);
    return 0;
}