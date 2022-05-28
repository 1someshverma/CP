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
    string s,t;
    cin>>s>>t;
    vector<pair<char,char>> p(26,{'0','0'});
    int i;
    int ans=0;
    vi q;
    fo(i,s.length()){
        if(s[i]!=t[i]){
            if(p[s[i]-'a'].second=='0' && p[t[i]-'a'].second=='0'){
                ans++;
                q.push_back(i);
                p[s[i]-'a'].second=t[i]-'a';
                p[t[i]-'a'].second=s[i]-'a';
            }else{
                if(p[s[i]-'a'].second!=t[i]-'a'){
                    cout<<"-1"<<endl;
                    return;
                }
                if(p[s[i]-'a'].second=='!'){
                    cout<<"-1"<<endl;
                    return;
                }
            }
        }else{
            if(p[s[i]-'a'].second=='0'||p[s[i]-'a'].second=='!')
                p[s[i]-'a'].second='!';
            else{
                cout<<"-1"<<endl;
                return;
            }
        }
    }
    cout<<ans<<endl;
    fo(i,q.size()){
        // if(p[i].second!='0' ){
        //     cout<<char(char(s[q[i]])+'a')<<" "<<char(p[i].second+'a')<<endl;
        // }
        cout<<char(s[q[i]])<<" "<<char(p[s[q[i]]-'a'].second+'a')<<endl;
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
