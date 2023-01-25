#include<iostream>
using namespace std;

typedef long long ll;

int main() {
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll curr = 1;
    while (q--) {
        ll type, val;
        cin >> type >> val;
        if (type == 1) {
            if (val < curr) {
                curr -= val;
            }
            else {
                val -= (curr - 1);
                curr = n - val + 1;
            }
        }
        else {
            ll last = n - curr + 1, idx;
            if (val <= last) {
                idx = curr + val - 1;
            }
            else {
                val -= last;
                idx = val;
            }
            cout << s[idx - 1] << "\n";
        }
    }
    return 0;
}
