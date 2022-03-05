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
vl arr1(21,1),arr2(50,1);
   
void solve()
{
    ll t;
    cin>>t;
    

    //  for(int i=1;i<50;i++){
    //   cout<<arr2[i]<<endl;
    // }
    while(t--){
    ll n;
    cin>>n;
    ll cnt=0;
    ll m;
    fo(m,21){
        if(arr1[m]==n)
            {
                cout<<"1"<<endl;
                return ;
            }
    }
    fo(m,50){
        if(arr1[m]==n)
            {
                cout<<"1"<<endl;
                return ;
            }
    }
    while(n>0){
       ll index1=lower_bound(arr1.begin(),arr1.end(),n)-arr1.begin();
       ll index2=lower_bound(arr2.begin(),arr2.end(),n)-arr2.begin();
        int j=0,k=0;
        while(arr1[j]<=n){
            j++;
        }
        j--;
        while(arr2[k]<=n){
            k++;
        }
        k--;
    //    cout<<arr1[index1-1]<<" "<<arr2[index2-1]<<endl;
        if(arr1[j]>=arr2[k]){
            n-=arr1[j];
        }else{
            n-=arr2[k];
        }
        cnt++;
   }
    cout<<cnt<<endl;
    }

}
    
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

     
    for(int i=1;i<50;i++){
        arr2[i]=2*arr2[i-1];
    }
    for(int i=1;i<21;i++){
        arr1[i]=i*arr1[i-1];
    }
    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
