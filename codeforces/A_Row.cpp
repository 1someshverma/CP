#include<cstdio>
int n,i;char a[111111];
bool check(){
  a[0]=a[n+1]='0';
  for(int i=1;i<=n;i++)if(a[i]=='1'){
    if(a[i-1]=='1')return 0;
    if(a[i+1]=='1')return 0;
  }
  return 1;
}
int main(){
  scanf("%d%s",&n,a+1);
  if(!check())return puts("No"),0;
  for(i=1;i<=n;i++)if(a[i]=='0'){
    a[i]='1';
    if(check())return puts("No"),0;
    a[i]='0';
  }
  puts("Yes");
}
