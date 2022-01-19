#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long int ar[n],cnt=0;
    for(int i=0;i<n;++i)
    {
      cin>>ar[i];
      cnt+=ar[i];
    }
    long long int m;
    cin>>m;
    m = m % cnt;
    int ans;
    if(m==0)
    {
      for(int i=n-1;i>=0;--i)
      {
        if(ar[i]!=0)
        {
          ans=i;
          break;
        }
      }
    }
    else
    {
      for(int i=0;i<n;++i)
      {
        m=m-ar[i];
        if(m<=0)
        {
          ans=i;
          break;
        }
      }
    }
    cout<<ans+1<<endl;
  }
  return 0;
}
