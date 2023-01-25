#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n + 1), cumSq(n + 1), cum(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        if (i == 1) {
            cum[i] = v[i];
            cumSq[i] = v[i] * v[i];
        }
        else {
            cum[i] = cum[i - 1] + v[i];
            cumSq[i] = cumSq[i - 1] + (v[i] * v[i]);
        }
    }
    ll add = 0, sub = 0;
    for (ll i = 2; i <= n; i++) {
        add += (cumSq[i - 1] + ((i - 1) * (v[i] * v[i])));
        sub += (cum[i - 1] * v[i] * 2);
    }
    ll res = add - sub;
    cout << res << "\n";
    return 0;
}

