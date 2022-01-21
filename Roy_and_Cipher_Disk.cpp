#include <iostream>
#include<cstring>
using namespace std;
int main() {
 int t,c1,c2,m,n,i,C[1000],len;
 string S;
 cin >> t;
 while(t--)
 {
 cin>>S;
 c1=0;
 len=S.length();
 for(i=0;i<len;i++)
 {
 c2=c1;
 c1=S[i]-97;
 m=((c1-c2)+26)%26;
 n=((c1-c2)-26)%26;
 if(m>=0&&m<=13)
 C[i]=m;
 else if(n<0)
 C[i]=n;
 cout<<C[i]<<" ";
 }
 cout<<"\n"; 
} 
}
