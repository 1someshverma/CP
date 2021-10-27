#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,ans=0;
    cin>>x;
    while(x>1)
    {
        ans+=x%2;
        if(x>=2)
        x=x/2;
    }
    cout<<ans+x<<endl;
}