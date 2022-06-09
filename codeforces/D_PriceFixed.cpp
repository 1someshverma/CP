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
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
void solve()
{
    int n;
    cin>>n;
    vpl p(n);
    int i;
    fo(i,n){
        cin>>p[i].first>>p[i].second;
    }
    sort(all(p),sortbysec);
    int j=n-1;
    i=0;
    ll ans=0,cnt=0;
    while(i<n){
        while(cnt<p[i].second && j>=0){
            if(cnt+p[j].first>=p[i].second){
                ans+=2*(p[i].second-cnt);
                p[j].first-=(p[i].second-cnt);
                cnt=p[i].second;
                
            }else{
                ans+=2*p[j].first;
                cnt+=p[j].first;
                p[j].first=0;
                j--;
            }
        }
        if(j==-1){
            if(p[i].first+cnt>=p[i].second){
                ans+=2*(p[i].second-cnt);
                cnt+=(p[i].second-cnt);
                ans+=p[i].first-cnt;
                cnt+=p[i].first-cnt;
            }else{
                ans+=2*p[i].first;
                cnt+=p[i].first;
                p[i].first=0;
            }
        }else{
            ans+=p[i].first;
            cnt+=p[i].first;
            p[i].first=0;
        }
        i++;
    }
    cout<<ans<<endl;
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
