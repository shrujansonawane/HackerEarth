#include<iostream>

using namespace std;

bool isonepresent(int n)

{
	while(n>0)
	{

		int rem=n%10;

		if(rem==1)
			{
			return true;

			}

		n=n/10;

		}

	return false;
}

int productofdigits(int n)

{
	int product=1;
	while(n!=0)
	{
		int rem=n%10;

		product=product*rem;

		n=n/10;

	}
	return product;
}



int main()
{
	int n;

	cin>>n;

	int count=0;


	for(int i=n;i<=10000000;i++)
	{
		if( (isonepresent(i)==false )&&(productofdigits(i)==n) )

		count++;
	}

	cout<<count<<endl;
	return 0;
}
