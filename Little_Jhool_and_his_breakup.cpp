#include<iostream>

#include"bits/stdc++.h"


 

using namespace std;


 

int main()

{

    string s;

    cin>>s;


 

    bool lflag = false;

    bool oflag = false;

    bool vflag = false;

    bool eflag = false;


 

    for (int i = 0; i < s.length(); i++)

    {

        if (s[i] == 'l' && !lflag)

        {

            lflag = true;

        }

        else if (s[i] == 'o' && lflag && !oflag)

        {

            oflag = true;

        }

        else if (s[i] == 'v' && lflag && oflag && !vflag)

        {

            vflag = true;

        }

        else if (s[i] == 'e' && lflag && oflag && vflag && !eflag)

        {

            eflag = true;

            break;

        }

    }

    if (lflag && oflag && eflag && vflag)

    {

        cout<<"I love you, too!"<<endl;

    }

    else

    {

        cout<<"Let us breakup!"<<endl;

    }

}
