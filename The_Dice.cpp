#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    cin>>s;

    int count=0;

    if(s[s.length()-1]=='6'){

         cout<<"-1";

    }

    else{

     for(int i=0;i<s.length();i++){

         if(s[i]=='6'){

         count++;

         }    

     }

     cout<<s.length()-count;

    }

    

}
