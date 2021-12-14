    #include<bits/stdc++.h>
    using namespace std;
    #define MAX_N 3000010
    int T,n;
    int a[MAX_N];
    long long b[MAX_N],m;
     
    signed main() {
      scanf("%d",&T);
      a[1]=2;
      for(int i=2;i<MAX_N;++i){
        a[i]=a[i-1]+3;
      }
      for(int i=1;i<MAX_N;++i){
        b[i]=b[i-1]+a[i];
      }
      while(T--){
        scanf("%d",&n);
        int ans=0;
        while(1){
          int id=upper_bound(b,b+MAX_N,n)-b-1;
          if(id==0)
            break;
          else{
            ans++;
            n-=b[id];
          }
        }
        printf("%d\n",ans);
      }
      return 0;
    }