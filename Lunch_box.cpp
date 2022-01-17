#include<bits/stdc++.h>
using namespace std;

int main()

{

    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        cin>>n>>m;
        int a[m];
        for(int i=0;i<m;i++){
        	cin>>a[i];
		}
        int tem;
        sort(a,a+m);
        int i=0,f=0,sum=0;
        while(i<m)
        {
            if((sum+a[i])>n)
            	break;
        	else
            {
            	sum+=a[i++];
                f++;

            }

        }

        cout<<f<<endl;

    }


    return 0;

}
