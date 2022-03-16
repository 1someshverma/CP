#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    int T;
    cin >> T;
    while (T --> 0) {
        int n, x;
        cin >> n >> x;
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            cnt += (val == x);
            sum += val;
        }
        if (cnt == n) {
            cout << 0 << '\n';
        } else if (cnt > 0) {
            cout << 1 << '\n';
        } else if (sum == n * x) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}
