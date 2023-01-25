#include<iostream>
using namespace std;

typedef long long ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll num = (a / c) * c;
    if (num < a) num += c;
    if (num > b) num = -1;
    cout << num << "\n";
    return 0;
}

