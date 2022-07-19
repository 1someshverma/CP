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
    int i;
    int x;
    set<int> st;
    fo(i,n){
        cin>>x;
        st.insert(x);
    }
    if(st.size()==1){
        cout<<"0"<<endl;
    }else if(st.size()==2){
        int f=*st.begin();
        st.erase(*st.begin());
        int s=*st.begin();
        if((s-f)%2==1)
         cout<<s-f<<endl;
        else{
            cout<<(s-f)/2<<endl;
        }
    }else if(st.size()==3){
        int f=*st.begin();
        st.erase(*st.begin());
        int s=*st.begin();
         st.erase(*st.begin());
        int t=*st.begin();
        if(t-s==s-f){
            cout<<t-s<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }else{
        cout<<"-1"<<endl;
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
