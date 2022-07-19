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
    string s;
    cin>>s;
    bool flag=true;
    string a,b;
    int i;
    fo(i,n){
        if(s[i]=='2'){
            a.push_back('1');
            b.push_back('1');
        }else if(s[i]=='0'){
            a.push_back('0');
            b.push_back('0');
        }else{
            if(flag){
                flag=false;
                a.push_back('1');
                b.push_back('0');
            }else{
                flag=true;
                a.push_back('0');
                b.push_back('1');
            }
        }
    }
    i=0;
    while(a[i]==b[i]){
        i++;
    }
    
    int f=0;
    if(a[i]>b[i]){
        f=1;
    }else{
        f=2;
    }
    i++;
    for(;i<n;i++){
        if(f==1){
            if(a[i]=='1' && b[i]=='1'){
                a[i]='0';
                b[i]='2';
            }else if(a[i]=='1' && b[i]=='0'){
                swap(a[i],b[i]);
            }
        }else{
            if(a[i]=='1' && b[i]=='1'){
                a[i]='2';
                b[i]='0';
            }else if(a[i]=='0' && b[i]=='1'){
                swap(a[i],b[i]);
            }
        }
    }
    cout<<a<<"\n"<<b<<endl;
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
