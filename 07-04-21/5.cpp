#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "
#define imax INT_MAX
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;

void solve(vi a){
    for(int i = 0; i < a.size(); i++){
        if(count(a.begin(), a.end(), a[i]) % 2 != 0){
            cout << a[i] << endl;
            break;
        }
    }
}

int main() {
    ll t, x, n, m;
    vi a;
    cin >> t;
    while(t % 2 == 0){
        cout << "Enter a odd number for the size of the array" << endl; 
        //an odd occurence of a single number will only work for a odd sized array
        cin >> t;
    }
    while(t--){
        cin >> x;
        a.pb(x);
    }
    solve(a);
    return 0;
}