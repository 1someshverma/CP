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
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    cin>>m;
    vi usb,ps;
    while(m--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        if(s=="USB")
            usb.push_back(x);
        else    
            ps.push_back(x);
    }
    sort(all(usb));
    sort(all(ps));
    ll cnt=0,cost=0;
    bool f1=false,f2=false;
    if(usb.size()>a){
        // int x=usb.size()-a;
        // if(a>1){
        cost+=accumulate(usb.begin(),usb.begin()+a,0LL);

        cnt+=a;
        f1=true;
        // }
    }else{
        cost+=accumulate(all(usb),0LL);
        cnt+=usb.size();
    }
    if(ps.size()>b){
        cost+=accumulate(ps.begin(),ps.begin()+b,0LL);
        cnt+=b;
         f2=true;
    }else{
        cost+=accumulate(all(ps),0LL);
        cnt+=ps.size();
    }
    // cout<<accumulate(all(ps),0)<<endl;;
    vi t;
    if(f1==true){
    for(int i=a;i<usb.size();i++){
        t.push_back(usb[i]);
    }
    }
    if(f2==true){
    for(int i=b;i<ps.size();i++){
        t.push_back(ps[i]);
    }
    }
    sort(all(t));
    if(t.size()>c){
        cost+=accumulate(t.begin(),t.begin()+c,0LL);
        cnt+=c;
    }else{
        cost+=accumulate(all(t),0LL);
        cnt+=t.size();
    }
    
    cout<<cnt<<" "<<cost<<endl;
    // cout<<cost<<endl;
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
