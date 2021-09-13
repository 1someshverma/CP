#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE

   freopen("input.txt", "r", stdin);
//   freopen("error.txt", "w", stderr);
   freopen("output.txt", "w", stdout);
   #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> p(n);
        for(int i=0;i<n;i++)
            cin>>p[i];
        sort(p.begin(),p.end(),[](int x,int y){ return x%2<y%2; });
        int x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                    if(__gcd(p[i],2*p[j])>1)
                        x++;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}