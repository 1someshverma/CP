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
ll square(ll a){
    ll p=pow(10,5);
    ll x=((a%p)*(a%p))%p;
    return x;
}
void solve()
{
    string s;
    cin>>s;
    ll x=int(s[0]-'0')*10000+int(s[1]-'0')+int(s[2]-'0')*1000+int(s[3]-'0')*10+int(s[4]-'0')*100;
    int a=int(s[0]-'0');
    int b=int(s[1]-'0');
    int c=int(s[2]-'0');
    int d=int(s[3]-'0');
    int e=int(s[4]-'0');
    cout<<x<<endl;
    cout<<pow(x,2)<<endl;
    cout<<square(x)<<endl;
    // ll ans=pow(x,2)-pow(x,2)/pow(10,5)*pow(10,5);
    ll ans=pow(d,2)+pow(e,2)+2*d*e+2*a*e+2*b*d+2*b*e+2*c*d+2*c*e;
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
