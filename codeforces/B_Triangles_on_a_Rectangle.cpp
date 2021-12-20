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
    ll w,h;
    cin>>w>>h;
    ll k1,k2;
    cin>>k1;
    ll arr1x[k1];
    for(int i=0;i<k1;i++)
        {
            cin>>arr1x[i];
        }
    cin>>k2;
    ll arr2x[k2];
    for(int i=0;i<k2;i++)
        {
            cin>>arr2x[i];
        }
    int k3;
    cin>>k3;
    ll arr3y[k3];
    for(int i=0;i<k3;i++)
        {
            cin>>arr3y[i];
        }
    int k4;
    cin>>k4;
    ll arr4y[k4];
    for(int i=0;i<k4;i++)
        {
            cin>>arr4y[i];
        }
    ll arr[4];
     arr[0]=(*max_element(arr1x,arr1x+k1)-*min_element(arr1x,arr1x+k1))*h;
     arr[1]=(*max_element(arr2x,arr2x+k2)-*min_element(arr2x,arr2x+k2))*h;
     arr[2]=(*max_element(arr3y,arr3y+k3)-*min_element(arr3y,arr3y+k3))*w;
     arr[3]=(*max_element(arr4y,arr4y+k4)-*min_element(arr4y,arr4y+k4))*w;
    cout<<*max_element(arr,arr+4)<<endl;
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
