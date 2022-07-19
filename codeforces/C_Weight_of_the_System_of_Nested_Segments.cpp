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
bool sortbysec(const pair<pair<ll,ll>,pair<ll,bool>> &a,
              const pair<pair<ll,ll>,pair<ll,bool>> &b)
{
    return (a.first.second < b.first.second);
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vl q;
    vector<pair<pair<ll,ll>,pair<ll,bool>>> p(m);
    ll i;
    fo(i,m){
        cin>>p[i].first.first>>p[i].first.second;
        p[i].second.first=i+1;
        p[i].second.second=false;
    }
    sort(all(p),sortbysec);
    ll sum=0;
    fo(i,2*n){
        p[i].second.second=true;
        q.push_back(p[i].second.first);
        sum+=p[i].first.second;
    }
    sort(all(q));
    cout<<sum<<endl;
    fo(i,n){
        cout<<q[i]<<" "<<q[2*n-i-1]<<endl;
    }
    // sort(all(p));
    // ll j=m-1;
    // i=0;
    // while(i<j){
    //     while(p[i].second.second==false && i!=j && i<m-1)
    //         i++;
    //     while(p[j].second.second==false && i!=j && j>0)
    //         j--;
    //     if(i!=j)
    //         cout<<p[i].second.first<<" "<<p[j].second.first<<endl;
    // }
    // // fo(i,m){
    // //     cout<<p[i].first.first<<" "<<p[i].first.second<<endl;
    // // }
    cout<<endl;
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
