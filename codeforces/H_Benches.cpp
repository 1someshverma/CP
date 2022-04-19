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
    ll x;
    cin>>x;
    ll ans=1;
    bool flag2=false,flag3=false,flag4=false,flag5=false;
    ll rem=x%5;
    // cout<<pow(x-rem,2)<<endl;
    // ans*=pow(x-rem,2)/120;
    for(int i=0;i<5;i++){
        // if(i!=rem)
            (ans*=pow(x-i,2));
        if(ans%2==0 && !flag2){
            ans/=2;
            flag2=true;
        }
        if(ans%3==0 && !flag3){
            ans/=3;
            flag3=true;
        }
        if(ans%4==0 && !flag4){
            ans/=4;
            flag4=true;
        }
        if(ans%5==0 && !flag5){
            ans/=5;
            flag5=true;
        }
            // ans=ans;
        // if(flag==false && ans>=120){
        //     ans/=120;
        //     flag=true;
        // }
    }
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
