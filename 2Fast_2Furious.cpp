#include<iostream>

using namespace std;

int main()

{

    int n;

    cin>>n;

    int a[n],b[n];

    for(int i=0;i<n;i++)

    cin>>a[i];

    for(int i=0;i<n;i++)

    cin>>b[i];

    int max=0,maxi=0;

    for(int i=0;i<n-1;i++)

    {

        int r= abs(a[i]-a[i+1]);

        if(r>max)

        max=r;

    }

    for(int i=0;i<n-1;i++)

    {

        int s= abs(b[i]-b[i+1]);

        if(s>maxi)

        maxi=s;

    }

    if(max>maxi)

    cout<<"Dom"<<endl<<max;

    else if(maxi>max)

    cout<<"Brian"<<endl<<maxi;

    else

    cout<<"Tie";
  
}
