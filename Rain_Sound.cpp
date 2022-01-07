#include<bits/stdc++.h>

using namespace std;

int main()

{

int T;

cin>>T;

while(T--)

{

long int l, r, s;

cin>>l>>r>>s;

long int min = l/s;

long int max = r/s;

if(l%s!=0)

{

min=min+1;

}

if(min<=max)

{

cout<<min<<" "<<max<<endl;

}

else

{

cout<<"-1"<<" "<<"-1"<<endl;

}

}

return 0;

}
