#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define mod 1000000007
void solve()
{
       int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int j = 0; j < n; j++){
      cin >> x[j];
    }
    vector<int> a, b;
    for (int j = 0; j < n; j++){
      if (x[j] < 0){
        a.push_back(-x[j]);
      }
      if (x[j] > 0){
        b.push_back(x[j]);
      }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnta = a.size();
    int cntb = b.size();
    long long ans = 0;
    for (int j = cnta - 1; j >= 0; j -= k){
      ans += a[j] * 2;
    }
    for (int j = cntb - 1; j >= 0; j -= k){
      ans += b[j] * 2;
    }
    int mx = 0;
    if (cnta > 0){
      mx = max(mx, a[cnta - 1]);
    }
    if (cntb > 0){
      mx = max(mx, b[cntb - 1]);
    }
    ans -= mx;
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
