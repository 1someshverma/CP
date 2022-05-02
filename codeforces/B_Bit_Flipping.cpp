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
    int n,k;
	    string s;
	    cin>>n>>k>>s;
	    int sol[n]={0};
	    int i=0,count1=0;
	    //hey i am 
	    while(i<n-1 and k>0){
	        if(count1%2==1){
                if(s[i]=='1')s[i]='0';
                else s[i]='1';
            }
            //haha 
            if(s[i]=='1'){
                if(k%2==1){ 
                    sol[i]=1;
                    k--;
                    i++;
                    count1++;
                }else{
                    i++;
                }
            }else{  
                s[i]='1';
                if(k%2==1){
                    i++;
                }else{
                    sol[i]=1;
                    k--;
                    count1++;
                    i++;
                }
            }
	     
	    }
	    int j=i;
        //codefr=orces
        
	    while(count1%2==1 and j<n){
	        if(s[j]=='1'){
	            s[j]='0';
	        }
	        else{
	            s[j]='1';
	        }
	        j++;
	    }
	    cout<<s<<endl;
	    sol[i]=k;
	    
	    for(int i=0;i<n;i++){
	        cout<<sol[i]<<" ";
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
