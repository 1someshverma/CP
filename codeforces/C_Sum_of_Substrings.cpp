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
    ll n,k;
    cin>>n>>k;
    vl p(n);
    int i;
    string s;
    cin>>s;
    ll no1=0;
    fo(i,n){
        if(s[i]=='1')
            no1++;
    }
    int j=n-1,x=0;
    if(no1<=1){
        if(no1==0){
            cout<<"0"<<endl;
        }else{
                 i=0;
        while(i<n && s[i]=='0'){
            i++;
        }
    
        while(j>=0 && s[j]=='0'){
            j--;
            x++;
        }
        if(k<min(x,i) || k==0){
            ll ans;
            if(s[0]=='1'){
                ans=10;
            }else if(s[n-1]=='1'){
                ans=1;
            }else{
                ans=11;
            }
            cout<<ans<<endl;
        }else{
            ll ans;
            if(k>=x){
                ans=1;
            }else if(k>=i){
                ans=10;
            }
            cout<<ans<<endl;
        }
        }
        return;
    }
    i=0;
    while(i<n && s[i]=='0'){
        i++;
    }
    
    while(j>=0 && s[j]=='0'){
        j--;
        x++;
    }
    if(k<min(x,i) || k==0){
        ll ans=10*(no1)+no1;
        if(s[0]=='1' && s[n-1]=='1'){
            ans=10*(no1-1)+no1-1;
        }else if(s[0]=='1'){
            ans=10*(no1)+(no1-1);
        }else if(s[n-1]=='1'){
            ans=10*(no1-1)+no1;
        }
        cout<<ans<<endl;
    }else{
        ll ans;
        if(k>=x+i){
            ans=10*(no1-1)+no1-1;
        }else{
            if(k>=x){
                ans=10*(no1-1)+no1;
            }else{
                ans=10*(no1)+(no1-1);
            }
        }
        cout<<ans<<endl;
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
