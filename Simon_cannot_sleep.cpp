#include<bits/stdc++.h>
 
using namespace std;
 
int hh , mm;
 
char c;
 
int fun(int hh ,int mm)
 
{
 
int p = mm/5;
 
int ans = hh;
 
 
 
 
if(hh >=12)
 
{
 
hh -=12 , ans--;
 
}
 
if(p >hh) ans++;
 
else if( p == hh)
 
{
 
if(mm %5 >= mm/12.0)
 
ans++;
 
}
 
return ans;
 
}
 
int fun2(int hh, int mm)
 
{
 
int ans =hh;
 
if( hh >= 12)
 
hh -=12, ans--;
 
return ans + (11*mm >= hh*60);
 
}
 
int main()
 
{
 
cin>>hh>>c>>mm;
 
cout<<fun(hh,mm)<<endl;
 
return 0;
 
}
