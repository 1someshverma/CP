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
    ll n,minimum=0,maximum=0;
    cin >> n;
    if(n%2==1||n<4)
    {
        cout << "-1\n";
        return;
    }
    // int l1,l2,r1,r2;
    // cin>>l1>>r1>>l2>>r2;
    // // if(r1>l2 && r2>r1){
    // //     cout<<l2<<endl;
    // // }else if(r2>l1 && r1<r2){
    // //     cout<<l1<<endl;
    // // }else{
    // //     cout<<l1+l2<<endl;
    // // }
    maximum=n/4;
    if(n%6==0)
    minimum=n/6;
    else if(n%6==2)
    {
        minimum=n/6+1;
    }
    else if(n%6==4)
    {
        minimum=n/6+1;
    }
    if(minimum>=0&&maximum>=0)
    {
        cout << minimum << " " << maximum << "\n";
    }
    else
    cout << "-1\n";
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
