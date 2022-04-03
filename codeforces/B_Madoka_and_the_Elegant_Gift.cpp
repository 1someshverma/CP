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
    int n,m;
    cin>>n>>m;
    vector<string> p(n);
    int i,j;
    fo(i,n){
        fo(j,m)
            cin>>p[i][j];
    }
    int arr1[n]={0};
    fo(i,n){
        fo(j,m){
            if(p[i][j]=='0')
                arr1[i]=1;
        }
    }
    int arr2[m]={0};
    fo(i,m){
        fo(j,n){
            if(p[j][i]=='0')
                arr2[i]=1;
        }
    }
    int sum1=0,sum2=0;
    fo(i,n){
        sum1+=arr1[i];
    }
    fo(i,m){
        sum2+=arr2[i];
    }
    if(sum1==n || sum2==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    // bool t1=false,t2=false;
    // fo(i,n-1){
    //     for(int k=i+1;k<n;k++){
    //         if(arr1[i]+arr2[k]>=m){

    //         }
    //     }
    // }
    // vector<vector<int>> vec( n , vector<int> (m,-1));
    // int count=1;
    // fo(i,n){
    //     fo(j,m-1){
    //         if(i==0){
    //             if(p[i][j]==1 && p[i][j+1]==1){
    //                 vec[i][j]=count;
    //                 vec[i][j]=count;
    //             }else if(p[i][j]==1){

    //             }
    //         }else{
    //             if(p[i][j]==1 && p[i][j+1]!=1){
    //                 count++;
    //             }
    //         }
    //     }
    // }
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
