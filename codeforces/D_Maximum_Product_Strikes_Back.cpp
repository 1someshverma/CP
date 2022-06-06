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
ll maxProduct(vector<int> q){
    int x=0,i;
    fo(i,q.size()){
        if(q[i]<0){
            x=1;
            break;
        }
    }
    if(x==1){
        int a,b;
        i=0;
        while(q[i]>0){
            i++;
        }
        a=i;
        i=q.size()-1;
        while(q[i]>0){
            i--;
         }   
        b=i;
        ll pro1=1,pro2=1;
        fo(i,b){
            pro1*=q[i];
        }
        for(i=q.size()-1;i>a;i--){
            pro2*=q[i];
        }
        ll ans=(pro1,pro2);
        return ans;

    }else{
        ll ans=1;
        fo(i,q.size()){
            ans*=q[i];
        }
        return ans;
    }
}
void solve()
{
    int n;
    cin>>n;
    vi p(n);
    int i;
    int no=0;   
    fo(i,n){
        cin>>p[i];
        if(p[i]==0)
            no++;
    }
    vector<int> arr[no+1];
    int k=0;
    fo(i,n){
        if(p[i]!=0)
            {
                arr[k].push_back(p[i]);
            }
        else 
            k++;
    }
    ll ans=INT32_MIN;
    fo(i,no+1){
        ans=max(ans,maxProduct(arr[i]));
    }
    cout<<ans<<endl;
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
