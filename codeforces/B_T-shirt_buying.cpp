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
    vi c1,c2,c3,c12,c13,c23,p,a,b,c;
    int i;
    fo(i,n){
        cin>>p[i];
    }
     fo(i,n){
        cin>>a[i];
    }
     fo(i,n){
        cin>>b[i];
    }
    int m;
    cin>>m;
    fo(i,m){
        cin>>c[i];
    }
    fo(i,n){
        if(a[i]==1 && b[i]==1)
            c1.push_back(p[i]);
        else if(a[i]==2 && b[i]==2)
            c2.push_back(p[i]);
        else if(a[i]==3 && b[i]==3)
            c3.push_back(p[i]);
        else if((a[i]==1 && b[i]==2)||(a[i]==2 && b[i]==1))
            c12.push_back(p[i]);
        else if((a[i]==1 && b[i]==3)||(a[i]==3 && b[i]==1))
            c13.push_back(p[i]);
        else if((a[i]==2 && b[i]==3)||(a[i]==3 && b[i]==2))
            c23.push_back(p[i]);
    }
    sort(all(c1)),sort(all(c2)),sort(all(c3)),sort(all(c12)),sort(all(c13)),sort(all(c23));

    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    fo(i,m){
        if(c[i]==1){
            if(a1<c1.size()&&a2<c12.size()){
                if(c1[a1]<=c12[a4]){
                    cout<<c1[a1]<<" ";
                    a1++;
                }
            }else if(a1<c1.size()){
                    cout<<c1[a1++]<<" ";
            }else if(a4<c12.size()){
                    cout<<c12[a4++]<<" ";
            }else {
                    cout<<"-1 ";
            }
        }else if(c[i]==2){
            if(a2<c2.size()&&a6<c23.size()){
                if(c2[a2]<=c23[a6]){
                    cout<<c2[a2]<<" ";
                    a2++;
                }
            }else if(a2<c2.size()){
                    cout<<c2[a2++]<<" ";
            }else if(a4<c12.size()){
                    cout<<c12[a4++]<<" ";
            }else {
                    cout<<"-1 ";
            }
        }
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
