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
    // ll n,q;
    // cin>>n>>q;
    // vl p(n);
    // int i;
    // ll sum=0;
    // fo(i,n){
    //     cin>>p[i];
    //     sum+=p[i];
    // }
    // bool flag=false;
    // while(q--){
    //     int t;
    //     cin>>t;
    //     if(t==1){
    //         ll j,x;
    //         cin>>j>>x;
    //         j--;
    //         sum-=p[j];
    //         sum+=x;
    //         p[j]=x;
    //         cout<<sum<<endl;
    //     }else{
    //         ll x;
    //         cin>>x;
    //         ll ans=x*n;
    //         sum=ans;
    //         cout<<ans<<endl;
            
    //         // flag=true;
    //         for(int k=0;k<n;k++){
    //             p[k]=x;
    //         }
    //     }
    // }

     ll n,q;
    cin>>n>>q;
    vl p(n);
    // inp(vec);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    ll sum= accumulate(all(p),0LL);
    map<ll,ll> mpa;
    ll last =-1;
    for(ll i=0;i<q;i++)
    {
        ll t;
        cin>>t;
        if(t==1)
        {
            ll l,val;
            cin>>l>>val;
            l--;
            if(mpa[l]>0)
                sum+= val-mpa[l],mpa[l]=val;
            else if(last!=-1)
                sum+= val-last,mpa[l]=val;
            else
                sum+=val-p[l],p[l]=val;
        }
        else
        {
            ll val;
            cin>>val;
            sum= val*n;
            mpa.clear();
            last = val;
        }
        cout<<sum<<endl;
    }
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
