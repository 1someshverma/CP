#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n;
  cin>>n;
  vector<int> p(n);
  for(int i=0;i<n;i++)
      cin>>p[i];
  if(n==1 && p[0]==1){
    cout<<"1"<<endl;
  }
  cout<<count(p.begin(),p.end(),1)+1<<endl;
  return 0;
}