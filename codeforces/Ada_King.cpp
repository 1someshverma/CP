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
bool isPossible(int i,int j,int n=8,int m=8){
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int r,int c,int k,vector<int> visited[],int &ans){
    visited[r][c]=k;
    ans++;
    if(k==0){
        return;
    }
    if(isPossible(r+1,c+1) && (visited[r+1][c+1]==0 || visited[r+1][c+1]<=(k-1))){
        dfs(r+1,c+1,k-1,visited,ans);
    }
    if(isPossible(r+1,c) && (visited[r+1][c]==0 || visited[r+1][c]<=(k-1))){
        dfs(r+1,c,k-1,visited,ans);
    }
    if(isPossible(r,c+1) && (visited[r][c+1]==0 || visited[r][c+1]<=(k-1))){
        dfs(r,c+1,k-1,visited,ans);
    }
    if(isPossible(r-1,c-1) && (visited[r-1][c-1]==0 || visited[r-1][c-1]<=(k-1))){
        dfs(r-1,c-1,k-1,visited,ans);
    }
    if(isPossible(r-1,c) && (visited[r-1][c]==0 || visited[r-1][c]<=(k-1))){
        dfs(r-1,c,k-1,visited,ans);
    }
    if(isPossible(r+1,c-1) && (visited[r+1][c-1]==0 || visited[r+1][c-1]<=(k-1))){
        dfs(r+1,c-1,k-1,visited,ans);
    }
    if(isPossible(r-1,c+1) && (visited[r-1][c+1]==0 || visited[r-1][c+1]<=(k-1))){
        dfs(r-1,c+1,k-1,visited,ans);
    }
    if(isPossible(r,c-1) && (visited[r][c-1]==0 || visited[r][c-1]<=(k-1))){
        dfs(r,c-1,k-1,visited,ans);
    }
    return ;
}
void solve()
{
    int r,c,k;
    cin>>r>>c>>k;
    r--,c--;
    vector<int> visited[8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            visited[i].push_back(0);
        }
    }
    int ans=0,cnt=0;
    dfs(r,c,k,visited,ans);
    //  for(int i=0;i<8;i++){
    //     for(int j=0;j<8;j++){
    //        if(visited[i][j])
    //             cnt++;
    //     }
    // }
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
