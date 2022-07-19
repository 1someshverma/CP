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
    int n;
    cin>>n;
    vl p(n),q(n);
    int i;
    ll ans=0;
    ll minx=INT32_MAX;
    ll y1=0,x1=0,x2=0,y2=0;
    ll a=0,b=0;
    fo(i,n)
        cin>>p[i];
    fo(i,n)
        cin>>q[i];
    fo(i,n){
        if(abs(p[0]-q[i])<minx){
            a=i;
            minx=abs(p[0]-q[i]);
        }
    }
    x1=minx;
    ans+=minx;
    minx=INT32_MAX;
    fo(i,n){
        if(abs(p[n-1]-q[i])<=minx ){
            b=i;
            minx=abs(p[n-1]-q[i]);
        }
    }
     y1=minx;
    ans+=minx;
    minx=INT32_MAX;
    if(a!=0){
    fo(i,n){
        if(abs(p[i]-q[0])<minx){
           
            minx=abs(p[i]-q[0]);
        }
    }
     x2=minx;
    ans+=minx;
    }
    
     minx=INT32_MAX;
    if(b!=n-1){
    fo(i,n){
        if(abs(p[i]-q[n-1])<minx ){
            minx=abs(p[i]-q[n-1]);
        }
    }
    y2=minx;
    ans+=minx;
    }
    // }
    // ll sol=abs(p[0]-q[0])+abs(p[n-1]-q[n-1]);
    // if(sol<=ans)
    //     cout<<sol<<endl;
    // else 
        cout<<ans<<endl;
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
