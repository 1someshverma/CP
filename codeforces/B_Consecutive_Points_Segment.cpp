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
#include<unordered_map>
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
    // int n;
    // cin>>n;
    // vi p(n);
    // int i;
    // fo(i,n)
    //     cin>>p[i];
    // int cnt2=0,cnt3=0;
    // fo(i,n-1){
    //    if(p[i+1]-p[i]>3){
    //        cout<<"NO"<<endl;
    //        return ;
    //    }else if(p[i+1]-p[i]==2){
    //        cnt2++;
    //        if(cnt2>2){
    //            cout<<"NO"<<endl;
    //            return ;
    //        }else if(cnt3==1 && cnt2==1){
    //        cout<<"NO"<<endl;
    //        return;
    //         }
    //    }else if(p[i+1]-p[i]==3){
    //        cnt3++;
    //        if(cnt3>1){
    //            cout<<"NO"<<endl;
    //            return ;
    //        }else if(cnt3==1 && cnt2==1){
    //        cout<<"NO"<<endl;
    //        return;
    //         }
    //    }
    // }
    // cout<<"YES"<<endl;
     int n;
    unordered_map<int,int> hey;
   cin >> n;
   vi p(n);
   for(int i=0;i<n;i++)
    cin >> p[i];
    bool ans=false;

   
    for(int i=n-1;i>=1;i--)
    {
        if(p[i]-p[i-1]>3)
            {cout << "NO\n";
            return;}
        else
        hey[p[i]-p[i-1]]++;
    }
    if(hey[1]==n-1)
        {
            cout << "YES\n";
            return;
        }
    if(hey.count(2)!=0&&hey[2]<=2&&hey.count(3)==0)
        {
            cout << "YES\n";
            return;
        }
    if(hey[3]==1&&hey.count(2)==0)
        {cout << "YES\n";
        return;}  
   cout << "NO\n";
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
