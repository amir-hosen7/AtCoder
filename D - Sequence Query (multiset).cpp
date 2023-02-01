#include<iostream>
#include<set>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    multiset<ll> st;
    while (n--) {
        ll type;
        cin >> type;
        if (type == 1) {
            ll x;
            cin >> x;
            st.insert(x);
        }
        else if (type == 2) {
            ll x, k;
            cin >> x >> k;
            auto it = st.upper_bound(x);
            if (it == st.begin()) {
                cout << "-1\n";
                continue;
            }
            it--;
            ll cnt = 0, res = -1;
            while (1) {
                cnt++;
                if (cnt == k) {
                    res = *it; break;
                }
                if (it == st.begin()) break;
                it--;
            }
            cout << res << "\n";
        }
        else {
            ll x, k;
            cin >> x >> k;
            auto it = st.lower_bound(x);
            ll cnt = 0, res = -1;
            while (it != st.end()) {
                cnt++;
                if (cnt == k) {
                    res = *it; break;
                }
                it++;
            }
            cout << res << "\n";
        }
    }
    return 0;
}

