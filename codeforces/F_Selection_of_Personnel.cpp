#include <bits/stdc++.h>
 
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define forn(i, n) for(int i = 0 ; (i) < (n) ; ++i)
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(),a.end()
#define pw(x) (1LL<<(x))
 
using namespace std;
 
typedef long long ll;
typedef double dbl;
typedef vector<int> vi;
typedef pair<int, int> pi;
 
const int inf = (int)1.01e9;
const dbl eps = 1e-9;
 
/* --- main part --- */
 
#define TASK "1"
 
ll cnk(ll n, int k)
{
    ll res = 1;
    forn(i, k) res = (res * (n - i)) / (i + 1);
    return res;
}
 
int main()
{
    #ifdef home
        assert(freopen(TASK".in", "r", stdin));
        assert(freopen(TASK".out", "w", stdout));
    #endif
    ll n, t;
 
    cin >> n;
    ll res = cnk(n, 5) + cnk(n, 6) + cnk(n, 7);
    cout << res;
    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
    return 0;
}