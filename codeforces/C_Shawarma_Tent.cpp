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
    ll sx,sy;
    cin>>n>>sx>>sy;
    vpl p(n);
    int i;
    fo(i,n)
        cin>>p[i].first>>p[i].second;
    int a=0,b=0,c=0,d=0;
    fo(i,n){
        if(min(p[i].first,sx)<=sx-1 && max(p[i].first,sx)>=sx-1 && min(p[i].second,sy)<=sy && max(p[i].second,sy)>=sy)
            a++;
        if(min(p[i].first,sx)<=sx+1 && max(p[i].first,sx)>=sx+1 && min(p[i].second,sy)<=sy && max(p[i].second,sy)>=sy)
            b++;
        if(min(p[i].first,sx)<=sx && max(p[i].first,sx)>=sx && min(p[i].second,sy)<=sy-1 && max(p[i].second,sy)>=sy-1)
            c++;
        if(min(p[i].first,sx)<=sx && max(p[i].first,sx)>=sx && min(p[i].second,sy)<=sy+1 && max(p[i].second,sy)>=sy+1)
            d++;
    }
    if(a==max(a,max(b,max(c,d))))
        {
            cout<<a<<endl;
            cout<<sx-1<<" "<<sy<<endl;
        }
    else if(b==max(a,max(b,max(c,d))))
        {
            cout<<b<<endl;
            cout<<sx+1<<" "<<sy<<endl;
        }
    else if(c==max(a,max(b,max(c,d))))
        {
            cout<<c<<endl;
            cout<<sx<<" "<<sy-1<<endl;
        }
    else if(d==max(a,max(b,max(c,d))))
        {
            cout<<d<<endl;
            cout<<sx<<" "<<sy+1<<endl;
        }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
