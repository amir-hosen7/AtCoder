#include<iostream>
#include<math.h>
#include<unordered_map>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll srt = sqrt(n);
    unordered_map<ll, bool> mark;
    ll cnt = 0;
    for (ll i = 2; i <= srt + 1; i++) {
        for (ll j = 2; j <= 40; j++) {
            ll num = powl(i, j);
            if(num > n) break;
            if (mark[num] == 0) {
                cnt++;
                mark[num] = 1;
            }
        }
    }
    ll res = n - cnt;
    cout << res << "\n";
    return 0;
}

