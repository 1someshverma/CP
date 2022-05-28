#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = (int) 1e5 + 5;
const int mod = (int) 1e9 + 7;

int n, x, f[N + N];
ll ans;

inline void solve () {
        scanf ("%d%d", &n, &x);
        for (int i = 1; i <= n; i++) {
                int a;
                scanf ("%d", &a);
                ans += f[a ^ x];
                f[a]++;
        }
        // printf ("%I64d\n", ans);
        cout<<ans<<endl;
}

int tests = 1;

int main () {
//        scanf ("%d", &tests);
        while (tests--) {
                solve ();
        }
        return 0;
}
