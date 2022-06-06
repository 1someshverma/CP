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
#include<bits/stdc++.h>
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
complex<ll> s;
void solve()
{
    int n;
    cin>>n;
    // vector<pair<string,string>> vec(n);
    // for(int i=0;i<n;i++){
    //     cin>>vec[i].first>>vec[i].second;
    // }
    // int i=0;
    // while (i<n)
    // {
    //    int cnt=1;
    //    int j=i;
    //    set<string> st;
    //    while((j+1)<n && vec[j].first==vec[j+1].first){
    //        if(st.find(vec[j].second)==st.end()){
    //            st.insert(vec[j].second);
    //             j++;
    //        }else{
    //            break;
    //        }
    //    }
    //     if(st.size()>=5){
    //         cout<<"PENTA KILL!"<<endl;
    //         return;
    //     }
    //     st.clear();
    //     i++;
    // }
    // cout<<"SAD:("<<endl;
    map<string,set<string>> mpp;
    while(n--){
        string s,q;
        cin>>s>>q;
        if(mpp[s].find(q)==mpp[s].end()){
            mpp[s].insert(q);
            set<string> an=mpp[s];
            if(an.size()>=5){
                cout<<"PENTA KILL!"<<endl;
                return; 
            }  
        }else{
            mpp[s].clear();
            mpp[s].insert(q);
        }
    }
    // auto itr=mpp.begin();
    // for(;itr!=mpp.end();itr++){
    //     set<string> an=itr->second;
    //     if(an.size()>=5){
    //         cout<<"PENTA KILL!"<<endl;
    //         return;
    //     }
    // }
    cout<<"SAD:("<<endl;
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
