#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> v(n + 1);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll res = 0;
    for (ll i = 0; i < n; i++) {
        ll mi = min(w, v[i].second);
        res += (v[i].first * mi);
        w -= mi;
    }
    cout << res << "\n";
    return 0;
}
