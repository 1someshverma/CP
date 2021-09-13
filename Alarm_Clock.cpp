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
    while (t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
        cout<<b<<endl;
        else
        {
            if(c<=d)
            cout<<"-1"<<endl;
            else
            {
               long long rem = a - b;
				long long rept = (rem + (c- d) - 1) / (c - d);
				cout << b+ rept * c << endl;
                
            }
        }
    }
    return 0;
}