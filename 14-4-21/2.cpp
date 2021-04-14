//prime or not
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
using namespace std;

void solve(ll n){
	ll c =0;
	for(int i = 2; i <= n/2; i++){
		if(n%i==0){
			cout << "no" << endl;
			c = 1;
			break;
		}
	}
	if(c==0){
		cout << "yes" << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll t; cin >> t;
	while(t--){
		ll x;
		cin >> x;
		if(x == 1){
		    cout << "no" << endl;
		}
		else{
		    solve(x);
		}
	}
	return 0;
}