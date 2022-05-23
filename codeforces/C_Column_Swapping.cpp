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
    // int n,m;
    // cin>>n>>m;
    // // int arr[n][m];
    // vector<vector<int>> arr( n , vector<int> (m, 0)); 
    // int i,j;
    // fo(i,n){
    //     fo(j,m)
    //         cin>>arr[i][j];
    // }
    // bool flag=true;
    // fo(i,n){
    //     if(!is_sorted(all(arr[i]))){
    //         flag=false;
    //     }
    // }
    // if(flag){
    //     cout<<"1 1"<<endl;
    // }else{
    //     int cnt=0,index;

    //     fo(i,m-1){
    //         if(arr[0][i]>arr[0][i+1]){
    //             cnt++;
    //             index=i;
    //         }
    //     }
    //     vpii p(n);
    //     for(int k=0;k<n;k++){
    //         p[k].first=arr[0][k];
    //         p[k].second=k;
    //     }
    //     sort(all(p));
    //     vi pp;
    //     for(int k=0;k<n;k++){
    //         if(k!=p[i].second){
    //             pp.push_back(i);
    //         }
    //     }
    //     if(pp.size()==2){

    //     }else{
    //         cout<<"-1"<<endl;
    //     }
    //     // if(cnt==1){
    //     //     bool flag1=true;
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m)), brr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                brr[i][j]=arr[i][j];
            }
            sort(brr[i].begin(),brr[i].end());
        }
        bool z=true;
        set<pair<int,int>> mp;
        for(int i=0;i<n;i++)
        {
            int c=0;
            int x,y;
            for(int j=0;j<m;j++)
            {
                if(brr[i][j]!=arr[i][j])
                {
                    c++;
                    if(c==1)
                        x=j;
                    else if(c==2)
                        y=j;
                }
            }
            if(c>2)
            {
                z=false;
                break;
            }
            if(c==2)
                mp.insert({x,y});
        }
        if(!z)
            cout<<-1<<endl;
        else if(mp.size()>1)
            cout<<-1<<endl;
        else if(mp.size()==0)
            cout<<1<<" "<<1<<endl;
        else if(mp.size()==1 && z)
        {
            bool f=true;
            auto [k,j] = *mp.begin();
            for(int i=0;i<n;i++)
            {
                if(brr[i][k]!=arr[i][j] || brr[i][j]!=arr[i][k])
                {
                    f=false;
                    break;
                }
            }
            if(f)
                cout<<k+1<<" "<<j+1<<endl;
            else
                cout<<-1<<endl;
        //     int cnt1=0,index1;
        //     for(i=1;i<n;i++){
        //         fo(j,m-1){
        //             if(arr[i][j]>arr[i][j+1]){
        //                 cnt++;
        //                 index1=j;
        //             }
        //         }
        //         if(cnt!=1){
        //             cout<<"-1"<<endl;
        //         }
        //         // if(cnt==1 && )

        //     }
        // }else{
        //     cout<<"-1"<<endl;
        // }
}
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
