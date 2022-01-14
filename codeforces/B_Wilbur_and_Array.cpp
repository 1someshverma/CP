#include <bits/stdc++.h>
#define MAX_N 200010
#define ll long long
using namespace std;
 
int n;
ll arr[MAX_N], tot=0;
 
int main(void) {
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%lld",arr+i);
        if (i>0) tot+=abs(arr[i]-arr[i-1]);
        else tot+=abs(arr[i]);
    }
    cout << tot << "\n";
    return 0;
}