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
    // ll n,x;
    // cin>>n>>x;
    // vl p(n);
    // int i;
    // fo(i,n)
    //     cin>>p[i];
    // queue<ll> sol;
    // // sol.push(p[0]);
    // ll temp=0;
    // ll ans=0;
    // fo(i,n){
       
    //     if(temp+p[i]<x){
    //         sol.push(p[i]);
    //         temp+=p[i];
    //     }else if(temp+p[i]>x){
    //         while(temp+p[i]>x){
    //         temp-=sol.front();
    //         sol.pop();
            
    //         }
    //         temp+=p[i];
    //         sol.push(p[i]);

    //     }else if(temp+p[i]==x){
    //         ans++;
    //         if(!sol.empty()){
    //         temp-=sol.front();
    //         sol.pop();
    //         temp+=p[i];
    //         sol.push(p[i]);
    //         }
    //     }

    //      if(temp==x){
    //         ans++;
    //         if(!sol.empty()){
    //         temp-=sol.front();
    //         sol.pop();
    //         temp+=p[i];
    //         sol.push(p[i]);
    //         }
    //     }
    // }
    // cout<<ans<<endl;
    ll n,sum;cin>>n>>sum;
    vector<ll>v(n);
    for(int i=0;i<n;++i)
    	cin>>v[i];
    ll m=0,cnt=0;
    map<ll,ll>mp;
    for(int i=0;i<n;++i)
    {
    	m+=v[i];
    	if(m==sum)cnt++;
    	if(mp.count(m-sum))
    	{
    		cnt+=mp[m-sum];
		}
		mp[m]++;
	}
	cout<<cnt<<endl;
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