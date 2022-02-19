#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100005
int read(){
    int w=0,f=1;
    char c=' ';
    while(c<'0'||c>'9')c=getchar(),f=c=='-'?-1:f;
    while(c>='0'&&c<='9')w=w*10+c-48,c=getchar();
    return w*f;
}
int n,a[N],ans;
signed main(){
    n=read();
    for(int i=1;i<=n;i++)
        a[i]=read();
    int x=1e10;
    for(int i=1;i<=n;i++){
        int tmp=(a[i]-i+n)/n+1;
        if(tmp<x)x=tmp,ans=i;
    }
    printf("%lld",ans);
	return 0;
}
