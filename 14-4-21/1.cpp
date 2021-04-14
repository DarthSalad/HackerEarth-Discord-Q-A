//2nd largest number
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n; cin >> n;
	while(n--){
		ll x;
	    vector<ll> a;
	    for(int i = 0;i < 3; i++){
	        cin >> x;
			a.pb(x);
	    }
	    sort(a.begin(), a.end(), greater<int>());
	    cout << a[1] << endl;
	}
	return 0;
}
