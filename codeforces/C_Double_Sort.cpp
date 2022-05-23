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
    vpii p(n);
    int i;
    fo(i,n){
        cin>>p[i].first;
        // p[i].second=i;
    }
    vpii q(n);
    fo(i,n){
        cin>>p[i].second;
        // q[i].second=i;
    }
    // sort(all(p)),sort(all(q));
    int key1, j,key2;
    vpii ans;
    for (i = 1; i < n; i++)
    {
        key1 = p[i].first;
        key2=p[i].second;
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && p[j].first > key1)
        {
            p[j + 1].first = p[j].first;
            p[j+1].second=p[j].second;
            ans.push_back({j,j+1});
            j = j - 1;
        }
        p[j + 1].first = key1;
        p[j+1].second=key2;
    }


    for (i = 1; i < n; i++)
    {
       key1 = p[i].first;
        key2=p[i].second;

        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && p[j].second > key2)
        {
            p[j + 1].second = p[j].second;
            p[j + 1].first = p[j].first;
            ans.push_back({j,j+1});
            j = j - 1;
        }
         p[j + 1].first = key1;
        p[j+1].second=key2;
    }
    // fo(i,n){
    //     cout<<p[i].first<<" ";
    // }
    // cout<<endl;
    // fo(i,n){
    //     cout<<p[i].second<<" ";
    // }
    // cout<<endl;
    bool flag1=true,flag2=true;
    fo(i,n-1){
        if(p[i].first>p[i+1].first){
            flag1=false;
            break;
        }
    }
    fo(i,n-1){
        if(p[i].second>p[i+1].second){
            flag2=false;
            break;
        }
    }
    if(flag2 && flag1){
        // cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        for(int k=0;k<ans.size();k++){
            cout<<ans[k].first+1<<" "<<ans[k].second+1<<endl;
        }
    }else{
        // cout<<"NO"<<endl;
        cout<<"-1"<<endl;
    }
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
