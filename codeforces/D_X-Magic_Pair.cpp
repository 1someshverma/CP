#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll check(ll a, ll b, ll x)
{
    if(a==x || b==x)
    {
        return true;
    }else if(a==0 || b==0){
        return false;
    }else{
        if(a-x>0 && (a-x)%b==0){
            return true;
        }else{
            return check(b, a%b, x);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a, b, x;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>a>>b>>x;
        if(a<b){
            swap(a, b);
        }
        if(check(a, b, x)==true){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}