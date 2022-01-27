#include<bits/stdc++.h>

using namespace std;

int main()

{

string s;

cin>>s;

int ans=0;

for(int i=0;i<s.size();i++)

{

if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5])

{

ans=1;

break;

}

 

}

if(ans==0)

cout<<"Good luck!"<<endl;

else

cout<<"Sorry, sorry!"<<endl;

}
