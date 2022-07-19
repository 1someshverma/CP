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
    int n;
    cin>>n;
    string s;
    cin>>s;
   
    if(s[0]=='9'){
         bool flag=true;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1] && s[i]=='9'){

                }else{
                    flag=false;
                    break;
                }
            }
        if(flag){
        for(int i=0;i<n-1;i++){
            cout<<"3";
        }
        cout<<"2"<<endl;
            return;
        }else{
            vi t;
            int x=9-(s[n-1]-'0');
            int carry=0;
            int z=x+2;
            int ans=z-z/10*10;
            carry=z/10;
            t.push_back(ans);
            for(int i=n-2;i>0;i--){
                x=9-(s[i]-'0');
                x+=carry;
                z=x+3;
                ans=z-z/10*10;
                carry=z/10;
                t.push_back(ans);
                // cout<<ans;
            }
            // cout<<"3"<<endl;
            t.push_back(3+carry);
            for(int j=t.size()-1;j>=0;j--){
                cout<<t[j];
            }
            cout<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
       if(s[i]=='0'){
           cout<<"9";
       }else if(s[i]=='1'){
           cout<<"8";
       }else if(s[i]=='2'){
           cout<<"7";
       }else if(s[i]=='3'){
            cout<<"6";
       }else if(s[i]=='4'){
            cout<<"5";
       }else if(s[i]=='5'){
            cout<<"4";
       }else if(s[i]=='6'){
           cout<<"3";
       }else if(s[i]=='7'){
            cout<<"2";
       }else if(s[i]=='8'){
            cout<<"1";
       }else if(s[i]=='9'){
           cout<<"0";
       }
    }
    cout<<endl;
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
