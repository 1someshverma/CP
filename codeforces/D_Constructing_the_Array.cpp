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
class segment{
    public:
        int noOfzero;
        int left;
        int right;
};
void solve()
{
    int n;
    cin>>n;
    set<pair<int,pair<int,int>>> temp;
    set<segment> t;
    set<int> a;
    vi ans(n+1,0);
    int r=n,l=1;
    temp.insert({(r-l+1),{l,r}});
    int cnt=1;
    int m=n;
    while(m--){
       
        // ans[x]=cnt;
        auto z=*(--temp.end());
        int zeroes=z.first;
        int left=z.second.first,right=z.second.second;
         int x=(left+right)/2;
         int y=(left+right-1)/2;
        if(left==right){
            ans[left]=cnt;
            temp.erase(z);
        }else{
            if((right-left+1)%2==0){
                ans[y]=cnt;
                if((y-1)>=left)
                    temp.insert({((y-1)-left+1),{left,y-1}});
                if((y-1)<=right)
                    temp.insert({(right-(y+1)+1),{(y+1),right}});
                temp.erase(z);
            }else{
                ans[x]=cnt;
               
                if((x-1)>=left)
                    temp.insert({((x-1)-left+1),{left,x-1}});
                if((y-1)<=right)
                    temp.insert({(right-(x+1)+1),{(x+1),right}});
                
                temp.erase(z);
            }
        }
        cnt++;
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
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
