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
    sort(all(s));
    int arr[3]={0};
    int i=0;
    if(t[0]=='a' && t[1]=='b' && t[2]=='c')
    {
        while(s[i]<='c')
        {
            if(s[i]=='a')
                arr[0]++;
            else if(s[i]=='b')
                arr[1]++;
            else if(s[i]=='c')
                arr[2]++;
            i++;
        }
        if(arr[0]==0 || arr[1]==0 || arr[2]==0)
        {
            cout<<s<<endl;
            return;
        }
        fo(i,arr[0])
        {
            cout<<'a';
        }
        fo(i,arr[2])
        {
            cout<<'c';
        }
        fo(i,arr[1])
        {
            cout<<'b';
        }
        for(int j=arr[0]+arr[1]+arr[2];j<s.length();j++)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    else 
        cout<<s<<endl;
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
