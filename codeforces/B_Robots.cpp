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
typedef vector<vector<char>> vc;
#define mod 1000000007
// complex<ll> p;
void solve()
{
        int n,m;
        cin>>n>>m;
        vc hey(n,vector<char>(m));
        vvi vec(n+1,vector<int> (m+1,0));
        // algorithm
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                char temp;
                cin>>temp;
                hey[i-1][j-1]=temp;
                vec[i][j]=(temp=='R') + vec[i][j-1] + vec[i-1][j] - vec[i-1][j-1];
            }
        }
    //      fo(i,n){
    //     cin>>p[i];
    //     if(p[i]<0)
    //         cnt++,p[i]=-p[i];
    // }
    // fo(i,cnt){
    //     // if(p[i]>0){
    //         p[i]=-p[i];
    //         // p[n-i-1]=-p[n-i-1];
    //     // }
    // }
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(hey[i-1][j-1]=='R')
                {
                    if(vec[i-1][m]==0 && vec[n][j-1]==0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
