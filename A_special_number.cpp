#include <bits/stdc++.h>
using namespace std;

int sum(int a) {
    int result = 0;
    while (a > 0) {
        result += a % 10;
        a /= 10;
    }
    return result;
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        int a;
        cin >> a;
        for(int i = a ; i <= a + 100 ; i++)
        {
            if(sum(i) % 4 == 0)
            {
                cout << i << endl;
                break;
            }
        }
   }
}
